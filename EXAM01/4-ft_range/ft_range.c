#include <stdlib.h>
#include <stdio.h>
int        ft_abs(int x)
{
    if (x < 0)
        return (-x);
    return (x);
}

int    *ft_range(int start, int end)
{
    int        size;
    int        i;
    int        *tab;
    int        *d;

    size = ft_abs(end - start) + 1;
    d = (tab = malloc(size * sizeof(int)));
    if (!d)
        return (0);
    i = 0;
	if ( size == 1)
	tab[0] = start;
    if (start < end)
    {
        while (i < size)
        {
            tab[i] = start + i;
            i++;
        }
    }
    else if (start > end)
    {
        while (i < size)
        {
            tab[i] = start - i;
            i++;
        }
    }
    return (tab);
}

int        main(void)
{
    int *tab;
    int i = 0;
    int start = 0;
    int end = 0 ;
    int size = ft_abs(end - start) + 1;
    
    tab = ft_range(start, end);
    while(i < size)
    {
    printf("%i, ", tab[i]);
    i++;
    }
}
