# include "../pushswap.h"

/*
for matching with example in pdf
works for 2,1,3,6,5,8
*/
void ft_binaryradix(t_psvars v)
{
	int	x;
	
	x = 1;
	//2 = 10
	//1 = 1
	//10 & 1 = 0
	//hence & x is for checking if the digit is 0.
	if ((v.a[0] & x) == 0)
		printf("%s", ft_pb(&v, 1));

}