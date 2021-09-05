#include "do_op.h"
#include <stdio.h>
#include <unistd.h>
int	operator(int a, char *c, int b)
{
	int	r;
	int	(*operator[5])(int, int);

	operator[0] = &ft_add;
	operator[1] = &ft_sub;
	operator[2] = &ft_mul;
	operator[3] = &ft_div;
	operator[4] = &ft_mod;
	r = 1;
	if (c[0] == '+')
		r = operator[0](a, b);
	else if (c[0] == '-')
		r = operator[1](a, b);
	else if (c[0] == '*')
		r = operator[2](a, b);
	else if (c[0] == '/')
		r = operator[3](a, b);
	else if (c[0] == '%')
		r = operator[4](a, b);
	return (r);
}

void	do_op(char *n, char *c, char *m)
{
	int	i;
	int	a;
	int	b;
	int	r;

	i = 0;
	r = 1;
	a = ft_atoi(n);
	b = ft_atoi(m);
	if (!(c[0] == '+' || c[0] == '-'
			|| c[0] == '/' || c[0] == '%' || c[0] == '*'))
		write (1, "0", 1);
	else if (c[0] == '/' && b == 0)
		write (1, "Stop : division by zero", 23);
	else if (c[0] == '%' && b == 0)
		write (1, "Stop : modulo by zero", 21);
	else
	{
		r *= (operator(a, c, b));
		ft_putnbr(r);
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2], av[3]);
	return (0);
}
