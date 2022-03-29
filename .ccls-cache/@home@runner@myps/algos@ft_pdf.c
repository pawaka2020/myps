# include "../pushswap.h"

/*
for matching with example in pdf
works for 2,1,3,6,5,8
*/
void ft_pdf(t_psvars v)
{
	printf("%s", ft_sa(&v, 1));
	printf("%s", ft_pb(&v, 1));
	printf("%s", ft_pb(&v, 1));
	printf("%s", ft_pb(&v, 1));
	printf("%s", ft_sa(&v, 1));
	printf("%s", ft_pa(&v, 1));
	printf("%s", ft_pa(&v, 1));
	printf("%s", ft_pa(&v, 1));
}