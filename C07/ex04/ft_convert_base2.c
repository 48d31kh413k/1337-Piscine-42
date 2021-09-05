int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	lenght_nbr(int nbr, char *base, int lenght)
{
	int				base_lenght;
	unsigned int	nb;

	base_lenght = ft_strlen(base);
	if (nbr < 0)
	{
		nb = nbr * -1;
		lenght++;
	}
	else
		nb = nbr;
	while (nb >= (unsigned)base_lenght)
	{
		nb /= base_lenght;
		lenght++;
	}
	lenght++;
	return (lenght);
}

void	ft_putnbr_base_v2(int nbr, char *base, char *nbrf)
{
	int		lenght_base;
	long	nb;
	int		i;
	int		len_nbrf;

	lenght_base = ft_strlen(base);
	len_nbrf = lenght_nbr(nbr, base, 0);
	nb = nbr;
	i = 0;
	if (nb < 0)
	{
		nbrf[0] = '-';
		nb *= -1;
		i = 1;
	}
	len_nbrf--;
	while (nb >= lenght_base)
	{
		nbrf[len_nbrf] = base[nb % lenght_base];
		nb /= lenght_base;
		len_nbrf--;
	}
	if (nb < lenght_base)
		nbrf[i] = base[nb];
}
