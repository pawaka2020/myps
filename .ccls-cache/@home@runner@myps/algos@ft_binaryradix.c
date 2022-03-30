# include "../pushswap.h"

/*
for matching with example in pdf
works for 2,1,3,6,5,8
*/

int ft_digitzero(int n)
{
	return (0);
}

int ft_getdigits(int sizea)
{
	int	digits;
	int	a;

	digits = 0;
	a = sizea;
	while (a != 0)
	{
		a = a >> 1;
		digits++;
	}
	return (digits);
}

void ft_binaryradix(t_psvars v, int showresult)
{
	int	x;
	int	i;
	int	digits;

	x = 1;
	digits = ft_getdigits(v.sizea);
	i = -1;
	while (digits > 0)
	{
		while (i++, i < v.size)
		{
			if ((v.a[0] & x) == 0)
				printf("%s", ft_pb(&v, 0));
			else
				printf("%s", ft_ra(&v, 0));
		}
		while (v.sizeb > 0)
			printf("%s", ft_pa(&v, 0));
		i = -1;
		x = x << 1;
		digits--;
	}
	if (showresult)
		ft_showsortresult(v);
}