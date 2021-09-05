#include <stdlib.h>
#include <stdio.h>

int ft_mul(int a)
{
	return (a * 2);
}
int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*res;
	int	*d;

	d = (res = malloc(length * sizeof(int)));
	if (!d)
		return (0);
	i = 0;
	while (i < length)
	{
		res[i] = (*f)(tab[i]);
		i++;
	}
	return (res);
}

int main (void)
{
	int	i;
	int *tab;
	int length;
	int *res;

	tab = malloc(length * sizeof(int));
	length = 10;
	i = 0;
	while (i < length)
	{
		tab[i] = i;
		i++;
	}
	res = ft_map(tab, length, &ft_mul);
	i = 0;
	while ( i < length)
	{
		printf( "%i", res[i]);
		i++;
	}
}
