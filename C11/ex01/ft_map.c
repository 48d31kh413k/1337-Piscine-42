#include <stdlib.h>
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
