# include "../pushswap.h"

/*
Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
*/
char	*ft_sa(t_psvars *v, int test)
{
	if (v->sizea >= 2)
	{
		v->s0 = v->stacka[0];
		v->s1 = v->stacka[1];
		v->stacka[0] = v->s1;
		v->stacka[1] = v->s0;
	}
	v->cmd = "sa\n";
	if (test)
		ft_printst(*v);
	return (v->cmd);
}