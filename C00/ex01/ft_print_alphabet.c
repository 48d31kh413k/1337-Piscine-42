#include <unistd.h>

void	ft_print_alphabet (void)
{
	char	 c;

	c = 'a';
	while (c <= 'z')
	{
		write (1, &c, 1);
		 c++;
	}
}
