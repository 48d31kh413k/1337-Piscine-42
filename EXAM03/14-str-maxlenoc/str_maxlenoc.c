#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

int		ft_str_length(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

void	ft_str_write(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char	*ft_str_n_duplicate(char *str, int n)
{
	int		index;
	char	*duplicate;

	if (!(duplicate = (char *)malloc((n + 1) * sizeof(char))))
		return (NULL);
	index = 0;
	while (str[index] && index < n)
	{
		duplicate[index] = str[index];
		index++;
	}
	while (index < n + 1)
	{
		duplicate[index] = '\0';
		index++;
	}
	return (duplicate);
}

int	x_cmp_n_size(char *find, char *where, int n)
{
	int		index;

	index = 0;
	while (find[index] == where[index] && find[index] && n--)
		index++;
	if (find[index] != '\0')
		return (0);
	return (1);
}

int	ft_compute_score(char *find, char **strs, int strs_size)
{
	int		index;
	int		size;
	int		offset;
	int		end_offset;
	char	*str;
	int	score;
	int	curr_biggest_score;
	int	biggest_score;

	index = 0;
	biggest_score = -1;
	while (index < strs_size)
	{
		str = strs[index];
		size = ft_str_length(str);
		offset = 0;
		curr_biggest_score = -1;
		while (offset < size)
		{
			end_offset = size;
			while (end_offset > offset)
			{
				score = x_cmp_n_size(find, str + offset, end_offset - offset + 1);
				if (score > curr_biggest_score)
					curr_biggest_score += score;
				end_offset--;
			}
			offset++;
		}
		biggest_score += curr_biggest_score;
		index++;
	}
	return (biggest_score);
}

void	ft_do_on_all_comb(char **strs, int strs_size, char **copies, int *scores)
{
	int		size;
	int		offset;
	int		end_offset;
	int		jndex;

	size = ft_str_length(strs[0]);
	offset = 0;
	jndex = 0;
	while (offset < size)
	{
		end_offset = size;
		while (end_offset > offset)
		{
			copies[jndex] = ft_str_n_duplicate(strs[0] + offset, end_offset - offset);
			scores[jndex] = ft_compute_score(copies[jndex], strs + 1, strs_size - 1);
			end_offset--;
			jndex++;
		}
		offset++;
	}
}

int	ft_count_possibility(char *str)
{
	int		count;
	int		size;
	int		offset;
	int		end_offset;

	count = 0;
	size = ft_str_length(str);
	offset = 0;
	while (offset < size)
	{
		end_offset = size;
		while (end_offset-- > offset)
			count++;
		offset++;
	}
	return (count);
}

void	ft_swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void    ft_swap_str(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	bubble_sort(int size, char **copies, int *scores)
{
	int		index;
	int		jndex;
	bool	swapped;

	index = 0;
	while (index < size)
	{
		swapped = false;
		jndex = index + 1;
		while (jndex < size)
		{
			if (scores[index] < scores[jndex])
			{
				ft_swap_int(&(scores[index]), &(scores[jndex]));
				ft_swap_str(&(copies[index]), &(copies[jndex]));
				swapped = true;
			}
			jndex++;
		}
		index++;
		if (!swapped)
			break ;
	}
}

bool	is_fitting_on_everyone(char *what, char **strs, int size)
{
	int		index;
	char	*haystack;
	char	*needle;

	if (ft_str_length(what) == 0)
		return (true);
	index = 0;
	while (index < size)
	{
		needle = what;
		haystack = strs[index];
		if (ft_str_length(haystack) != 0)
		{
			while (true)
			{
				if (*needle == '\0')
					break ;
				if (*needle == *haystack)
					needle++;
				else
					needle = what;
				if (*haystack == '\0')
					return (false);
				haystack++;
			}
		}
		index++;
	}
	return (true);
}

void	print_best(int size, char **copies, char **originals, int originals_size, int *scores)
{
	int	index;
	int	jndex;
	int	valid_score;
	int	validated;
	char	**final_copies;
	int	longest;

	index = 0;
	jndex = 0;
	validated = 0;
	valid_score = INT_MAX;
	if (!(final_copies = (char **)malloc(size * sizeof(char *))))
		return ;
	while (index < size)
	{
		if (is_fitting_on_everyone(copies[index], originals, originals_size))
		{
			if (valid_score == INT_MAX)
				valid_score = scores[index];
			if (scores[index] != valid_score)
				break ;
			final_copies[jndex] = copies[index];
			validated++;
			jndex++;
		}
		index++;
	}
	if (validated == 0)
		return ;
	index = 0;
	longest = -1;
	jndex = -1;
	while (index < validated)
	{
		if (longest < ft_str_length(final_copies[index]))
		{
			longest = ft_str_length(final_copies[index]);
			jndex = index;
		}
		index++;
	}
	if (jndex == -1)
		return ;
	ft_str_write(final_copies[jndex]);
	free(final_copies);
}

void	clear_results(int size, char **copies, int *scores)
{
	int	index;

	index = 0;
	while (index < size)
	{
		free(copies[index]);
		index++;
	}
	free(copies);
	free(scores);
}

void	ft_str_maxlenoc(char **strs, int size)
{
	int		possibilities;
	char	**copies;
	int		*scores;

	possibilities = ft_count_possibility(strs[0]);
	copies = (char **)malloc(possibilities * sizeof(char *));
	scores = (int *)malloc(possibilities * sizeof(int));
	if (!scores || !copies)
		return ;
	ft_do_on_all_comb(strs, size, copies, scores);
	bubble_sort(possibilities, copies, scores);
	print_best(possibilities, copies, strs + 1, size - 1, scores);
	clear_results(possibilities, copies, scores);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		ft_str_maxlenoc(argv + 1, argc - 1);
	write(1, "\n", 1);
}
