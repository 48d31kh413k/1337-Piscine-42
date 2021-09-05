#include <stdlib.h>
int	check_separator(char c)
{
	if ( c == 10 || c == 9 || c == 32)
		return (1);
	if (c == 0)
		return (1);
	return (0);
}

int	count_strings(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check_separator(str[i]))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !check_separator(str[i]))
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str)
{
	int	i;

	i = 0;
	while (str[i] && !check_separator(str[i]))
		i++;
	return (i);
}

char	*ft_word(char *str)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char	**strings;
	int		i;

	i = 0;
	strings = (char **)malloc(sizeof(char *)
			* (count_strings(str) + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && check_separator(*str))
			str++;
		if (*str != '\0')
		{
			strings[i] = ft_word(str);
			i++;
		}
		while (*str && !check_separator(*str))
			str++;
	}
	strings[i] = 0;
	return (strings);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	int		index;
	char	**split;
	(void)	argc;
	split = ft_split(argv[1]);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}
