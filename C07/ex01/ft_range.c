#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		range;
	int		index;
	int		*buffer;
	int		*d;

	if (min >= max)
		return (0);
	range = max - min;
	d = (buffer = malloc(range * sizeof(int)));
	if (!d)
		return (0);
	index = 0;
	while (index < range)
	{
		buffer[index] = min + index;
		index++;
	}
	return (buffer);
}
