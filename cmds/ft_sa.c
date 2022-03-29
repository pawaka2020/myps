# include "../pushswap.h"

/*
Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
*/
char	*ft_sa(t_psvars *v, int debug)
{
	if (v->sizea >= 2)
	{
		v->i0 = v->a[0];
		v->i1 = v->a[1];
		v->a[0] = v->i1;
		v->a[1] = v->i0;
	}
	v->cmd = "sa\n";
	if (debug)
		ft_presult(*v);
	return (v->cmd);
}