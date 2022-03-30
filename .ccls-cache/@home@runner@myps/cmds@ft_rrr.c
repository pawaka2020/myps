# include "../pushswap.h"

/*
rra and rrb at the same time
*/
char	*ft_rrr(t_psvars *v, int debug)
{
	v->cmd = ft_rra(v, 0);
	v->cmd = ft_rrb(v, 0);
	v->cmd = "rrr\n";
	v->count = v->count + 1;
	if (debug)
		ft_presult(*v);
	return (v->cmd);
}