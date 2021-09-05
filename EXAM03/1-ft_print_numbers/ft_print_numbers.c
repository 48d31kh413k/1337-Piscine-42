#include <unistd.h>

void	ft_print_numbers(void)
{
	char digit;
	
	digit = '0';
	while (digit <= '9')
	{
		write(1, &digit, 1);
		digit++;
	}
}
