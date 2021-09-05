bool	ft_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_count_alpha_recursive_count(char *str, char target)
{
	int		count;
	char	current;

	count = 0;
	while ((current = *str))
	{
		if (ft_is_uppercase(current))
			current += CASE_OFFSET;
		if (target == current)
			count++;
		str++;
	}
	return (count);
}

void	ft_count_alpha_print(int occurences[LETTER_COUNT + 1],
				char order[LETTER_COUNT + 1])
{
	int	index;
	int	size;

	size = 0;
	while (order[size] != '\0')
		size++;
	index = 0;
	while (index < size)
	{
		printf("%d%c", occurences[order[index] - 'a'], order[index]);
		if (index != size - 1)
			printf(", ");
		index++;
	}
}

char	ft_count_alpha_validate(char c, int occurences[LETTER_COUNT + 1])
{
	if (!ft_is_uppercase(c) && !((c >= 'a' && c <= 'z')))
		return ('\0');
	if (ft_is_uppercase(c))
		c += CASE_OFFSET;
	if (occurences[(int)c - 'a'] != NOT_COUNTED_YET)
		return ('\0');
	return (c);
}

void	ft_count_alpha(char *str)
{
	int		index;
	int		occurences[LETTER_COUNT + 1];
	char		occurences_order[LETTER_COUNT + 1];
	char	current;

	index = 0;
	while (index < LETTER_COUNT + 1)
	{
		occurences[index] = NOT_COUNTED_YET;
		occurences_order[index] = '\0';
		index++;
	}
	index = 0;
	while (*str)
	{
		current = ft_count_alpha_validate(*str, occurences);
		if (current != '\0')
		{
			occurences[(int)current - 'a'] = ft_count_alpha_recursive_count(str, current);
			occurences_order[index] = current;
			index++;
		}
		str++;
	}
	ft_count_alpha_print(occurences, occurences_order);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_count_alpha(argv[1]);
	printf("\n");
}
