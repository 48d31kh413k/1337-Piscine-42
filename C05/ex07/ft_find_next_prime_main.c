#include <stdio.h>
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	 if (nb < 2)
	        return(0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

int main (void)
{
	printf("%d -> %d\n", -2316, ft_find_next_prime(-2316));
	printf("%d -> %d\n", 0, ft_find_next_prime(0));
	printf("%d -> %d\n", 1, ft_find_next_prime(1));
	printf("%d -> %d\n", 2, ft_find_next_prime(2));
	printf("%d -> %d\n", 7853, ft_find_next_prime(7853));
	printf("%d -> %d\n", 78989, ft_find_next_prime(78989));
	printf("%d -> %d\n", 2147483643, ft_find_next_prime(2147483643));
	printf("%d -> %d\n", 2147483645, ft_find_next_prime(2147483645));
	printf("%d -> %d\n", 2147483646, ft_find_next_prime(2147483646));
	printf("%d -> %d\n", 2147483647, ft_find_next_prime(2147483647));
	printf("%d -> %d\n", 370091, ft_find_next_prime(370091));
	printf("%d -> %d\n", 188423, ft_find_next_prime(188423));
	printf("%d -> %d\n", 244239, ft_find_next_prime(244239));
	printf("%d -> %d\n", 168976, ft_find_next_prime(168976));
	printf("%d -> %d\n", 216082, ft_find_next_prime(216082));
	printf("%d -> %d\n", 2189, ft_find_next_prime(2189));
	printf("%d -> %d\n", 61463, ft_find_next_prime(61463));
	printf("%d -> %d\n", 148515, ft_find_next_prime(148515));
	printf("%d -> %d\n", 150620, ft_find_next_prime(150620));
	printf("%d -> %d\n", 220714, ft_find_next_prime(220714));
	printf("%d -> %d\n", 373814, ft_find_next_prime(373814));
	printf("%d -> %d\n", 251964, ft_find_next_prime(251964));
	printf("%d -> %d\n", 152126, ft_find_next_prime(152126));
	printf("%d -> %d\n", 13383, ft_find_next_prime(13383));
	printf("%d -> %d\n", 177754, ft_find_next_prime(177754));
	printf("%d -> %d\n", 100956, ft_find_next_prime(100956));
	printf("%d -> %d\n", 267880, ft_find_next_prime(267880));
	printf("%d -> %d\n", 421488, ft_find_next_prime(421488));
	printf("%d -> %d\n", 176753, ft_find_next_prime(176753));
	printf("%d -> %d\n", 119928, ft_find_next_prime(119928));
	printf("%d -> %d\n", 214650, ft_find_next_prime(214650));
	printf("%d -> %d\n", 409215, ft_find_next_prime(409215));
	printf("%d -> %d\n", 163456, ft_find_next_prime(163456));
	printf("%d -> %d\n", 194689, ft_find_next_prime(194689));
	printf("%d -> %d\n", 28808, ft_find_next_prime(28808));
	printf("%d -> %d\n", 372877, ft_find_next_prime(372877));
	printf("%d -> %d\n", 241811, ft_find_next_prime(241811));
	printf("%d -> %d\n", 97941, ft_find_next_prime(97941));
	printf("%d -> %d\n", 412312, ft_find_next_prime(412312));
	printf("%d -> %d\n", 27801, ft_find_next_prime(27801));
	printf("%d -> %d\n", 201370, ft_find_next_prime(201370));
	printf("%d -> %d\n", 187039, ft_find_next_prime(187039));
	printf("%d -> %d\n", 272544, ft_find_next_prime(272544));
	printf("%d -> %d\n", 165539, ft_find_next_prime(165539));
	printf("%d -> %d\n", 242852, ft_find_next_prime(242852));
	printf("%d -> %d\n", 286386, ft_find_next_prime(286386));
	printf("%d -> %d\n", 124595, ft_find_next_prime(124595));
	printf("%d -> %d\n", 361144, ft_find_next_prime(361144));
	printf("%d -> %d\n", 157884, ft_find_next_prime(157884));
	printf("%d -> %d\n", 103616, ft_find_next_prime(103616));
	printf("%d -> %d\n", 219344, ft_find_next_prime(219344));
	printf("%d -> %d\n", 56019, ft_find_next_prime(56019));
	printf("%d -> %d\n", 337109, ft_find_next_prime(337109));
	printf("%d -> %d\n", 342234, ft_find_next_prime(342234));
	printf("%d -> %d\n", 421072, ft_find_next_prime(421072));
	printf("%d -> %d\n", 302308, ft_find_next_prime(302308));
	printf("%d -> %d\n", 381167, ft_find_next_prime(381167));
	printf("%d -> %d\n", 23799, ft_find_next_prime(23799));
	printf("%d -> %d\n", 89848, ft_find_next_prime(89848));
	printf("%d -> %d\n", 291578, ft_find_next_prime(291578));
	printf("%d -> %d\n", 288004, ft_find_next_prime(288004));
	printf("%d -> %d\n", 5902, ft_find_next_prime(5902));
	printf("%d -> %d\n", 312602, ft_find_next_prime(312602));
	printf("%d -> %d\n", 84251, ft_find_next_prime(84251));
	printf("%d -> %d\n", 117025, ft_find_next_prime(117025));
	printf("%d -> %d\n", 311079, ft_find_next_prime(311079));
	printf("%d -> %d\n", 359208, ft_find_next_prime(359208));
	printf("%d -> %d\n", 135989, ft_find_next_prime(135989));
	printf("%d -> %d\n", 195895, ft_find_next_prime(195895));
	printf("%d -> %d\n", 260922, ft_find_next_prime(260922));
	printf("%d -> %d\n", 2366, ft_find_next_prime(2366));
	printf("%d -> %d\n", 421192, ft_find_next_prime(421192));
	printf("%d -> %d\n", 387403, ft_find_next_prime(387403));
	printf("%d -> %d\n", 57164, ft_find_next_prime(57164));
	printf("%d -> %d\n", 350030, ft_find_next_prime(350030));
	printf("%d -> %d\n", 341645, ft_find_next_prime(341645));
	printf("%d -> %d\n", 85328, ft_find_next_prime(85328));
	printf("%d -> %d\n", 40288, ft_find_next_prime(40288));
	printf("%d -> %d\n", 249704, ft_find_next_prime(249704));
	printf("%d -> %d\n", 289340, ft_find_next_prime(289340));
	printf("%d -> %d\n", 229739, ft_find_next_prime(229739));
	printf("%d -> %d\n", 176508, ft_find_next_prime(176508));
	printf("%d -> %d\n", 159210, ft_find_next_prime(159210));
	printf("%d -> %d\n", 271233, ft_find_next_prime(271233));
	printf("%d -> %d\n", 74628, ft_find_next_prime(74628));
	printf("%d -> %d\n", 395141, ft_find_next_prime(395141));
	printf("%d -> %d\n", 406918, ft_find_next_prime(406918));
	printf("%d -> %d\n", 365454, ft_find_next_prime(365454));
	printf("%d -> %d\n", 57232, ft_find_next_prime(57232));
	printf("%d -> %d\n", 87443, ft_find_next_prime(87443));
	printf("%d -> %d\n", 124312, ft_find_next_prime(124312));
	printf("%d -> %d\n", 69531, ft_find_next_prime(69531));
	printf("%d -> %d\n", 72609, ft_find_next_prime(72609));
	printf("%d -> %d\n", 199595, ft_find_next_prime(199595));
	printf("%d -> %d\n", 163244, ft_find_next_prime(163244));
	printf("%d -> %d\n", 365490, ft_find_next_prime(365490));
	printf("%d -> %d\n", 221121, ft_find_next_prime(221121));
	printf("%d -> %d\n", 231874, ft_find_next_prime(231874));
	printf("%d -> %d\n", 199416, ft_find_next_prime(199416));
	printf("%d -> %d\n", 54226, ft_find_next_prime(54226));
	printf("%d -> %d\n", 52189, ft_find_next_prime(52189));
	printf("%d -> %d\n", 137182, ft_find_next_prime(137182));
	printf("%d -> %d\n", 394720, ft_find_next_prime(394720));
	printf("%d -> %d\n", 312292, ft_find_next_prime(312292));
	printf("%d -> %d\n", 407013, ft_find_next_prime(407013));
	printf("%d -> %d\n", 261096, ft_find_next_prime(261096));
	printf("%d -> %d\n", 146410, ft_find_next_prime(146410));
	printf("%d -> %d\n", 331250, ft_find_next_prime(331250));
	printf("%d -> %d\n", 123897, ft_find_next_prime(123897));
	printf("%d -> %d\n", 14847, ft_find_next_prime(14847));
	return (0);
}
