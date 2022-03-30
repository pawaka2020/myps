# include "../pushswap.h"

void ft_test(t_psvars v)
{
	ft_presult(v);
	printf("beginning\n");
	printf("%s", ft_pb(&v, 1));	
	printf("%s", ft_pb(&v, 1));
	printf("%s", ft_pb(&v, 1));
	printf("%s", ft_pa(&v, 1));	
	printf("%s", ft_pa(&v, 1));
	printf("%s", ft_pa(&v, 1));
	
}