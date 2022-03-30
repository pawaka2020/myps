# include "../pushswap.h"

void ft_showsortresult(t_psvars v)
{
	int	i;

	i = -1;
	printf("Stack size : %d\n", v.size);
	printf("Total commands : %d\n", v.count);
	printf("Sort result: ");
	while (i++, i < v.size)
		printf("%d ", v.a[i]);
	printf("\n");
}