# include "../pushswap.h"

/*
The most basic sorting algo
this is only for stack size 6 and below 
We already know the lowest value, it's 0
since we already converted all integers 
into ranks.

*/
void ft_insertion(t_psvars v)
{
	int	i;
	int	j;
	
	i = -1;
	j = 0;
	while (j < v.size)
	{
		while (i++, i < v.sizea)
		{
			printf("i = %d, v.a[0] = %d, j = %d\n", i, v.a[i], j);
			if (v.a[0] == j)
			{
				printf("%s", ft_pb(&v, 0));
				break;
			}
			else
				printf("%s", ft_ra(&v, 0));
		}
		while (v.sizeb > 0)
			printf("%s", ft_pa(&v, 0));
		i = -1;
		j++;
	}
	ft_showsortresult(v);
}