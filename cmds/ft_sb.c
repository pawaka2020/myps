# include "../pushswap.h"

/*
Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
*/
char	*ft_sb(t_psvars *v, int debug)
{
	if (v->sizeb >= 2)
	{
		v->i0 = v->b[0];
		v->i1 = v->b[1];
		v->b[0] = v->i1;
		v->b[1] = v->i0;
	}
	v->cmd = "sa\n";
	if (debug)
		ft_printst2(*v);
	return (v->cmd);
}