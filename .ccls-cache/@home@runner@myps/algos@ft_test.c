# include "../pushswap.h"

void ft_test(t_psvars v)
{
	printf("%s", ft_pb(&v, 1));	
	printf("%s", ft_pb(&v, 1));
	printf("%s", ft_pb(&v, 1));
	printf("%s", ft_pa(&v, 1));	
	printf("%s", ft_pa(&v, 1));
	printf("%s", ft_pa(&v, 1));
	ft_presult(v);
}