# include "../pushswap.h"

/*
ra and rb at the same time.
*/
char	*ft_rr(t_psvars *v, int debug)
{
	v->cmd = ft_ra(v, 0);
	v->cmd = ft_rb(v, 0);
	v->cmd = "rr\n";
	if (debug)
		ft_presult(*v);
	return (v->cmd);
}