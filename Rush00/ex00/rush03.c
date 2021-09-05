void	ft_putchar(char c);

void	ft_print(int len, char begin_char, char midel_char, char end_char)
{
	int	letter_counter;

	letter_counter = 1;
	while (letter_counter <= len)
	{
		if (letter_counter == 1)
			ft_putchar(begin_char);
		else if (letter_counter == len)
			ft_putchar(end_char);
		else
			ft_putchar(midel_char);
		letter_counter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line_counter;

	line_counter = 1;
	if (x >= 1 && y >= 1 )
	{
		while (line_counter <= y)
		{
			if (line_counter == 1)
				ft_print(x, 'A', 'B', 'C');
			else if (line_counter == y)
				ft_print(x, 'A', 'B', 'C');
			else
				ft_print(x, 'B', ' ', 'B');
			line_counter++;
		}
	}
}
