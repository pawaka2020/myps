# include "../pushswap.h"

/*
Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty
*/
char	*ft_pb(t_psvars *v, int debug)
{
	if(v->sizea == 0)
		return ("pb\n");
	v->sizeb = v->sizeb + 1;
	ft_rrb(v, 0);
	v->i0 = v->a[0];
	v->i1 = v->b[0];
	v->a[0] = v->i1;
	v->b[0] = v->i0;
	ft_ra(v, 0);
	v->sizea = v->sizea - 1;
	v->cmd = "pb\n";
	if (debug)
		ft_printst2(*v);
	return (v->cmd);
}