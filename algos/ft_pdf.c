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
	printf("***\n");
	printf("%s", ft_sa(&v, 1));
	printf("%s", ft_pa(&v, 1));
	printf("%s", ft_pa(&v, 1));
	printf("%s", ft_pa(&v, 1));
}

/*
my attempt to codify ft_pdf so it would work for all
parameters
*/
void ft_pdf2(t_psvars v)
{
	/*
	swap first 2 of stacka when stacka[0] > stacka[1]
	, then push the two numbers to stackb.
	the rr and rrr are just to demonstrate, they cancel each other out

	try to introduce shortcuts by scannign the whole array for 
	correct sorting. If the rest of the array is already correct, don't sort any 	further and return stackb to stack a
	*/
	// printf("%s", ft_sa(&v, 1));
	// printf("%s", ft_pb(&v, 1));
	// printf("%s", ft_pb(&v, 1));
	// printf("%s", ft_pb(&v, 1));
	// printf("%s", ft_rr(&v, 1));
	// printf("%s", ft_rrr(&v, 1));
	// printf("%s", ft_sa(&v, 1));
	// printf("%s", ft_pa(&v, 1));
	// printf("%s", ft_pa(&v, 1));
	// printf("%s", ft_pa(&v, 1));

	//if higher number, swap first
	//but nontheless move to stack b
	//move down and repeat the process
	//optional: break if sorting already correct
	//then put stack b all back to stack a
}