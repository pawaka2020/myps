# include "../pushswap.h"

/*
Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
*/
char	*ft_pa(t_psvars *v, int debug)
{
	v->sizea = v->sizea + 1;
	ft_rra(v, 0);
	v->i0 = v->b[0];
	v->i1 = v->a[0];
	v->b[0] = v->i1;
	v->a[0] = v->i0;
	ft_rb(v, 0);
	v->sizeb = v->sizeb - 1;
	v->cmd = "pa\n";
	if (debug)
		ft_printst2(*v);
	return (v->cmd);
}