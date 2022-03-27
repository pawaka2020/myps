# include "../pushswap.h"

/*
rra and rrb at the same time
*/
char	*ft_rrr(t_psvars *v, int debug)
{
	v->cmd = ft_rra(v, 0);
	v->cmd = ft_rrb(v, 0);
	v->cmd = "rrr\n";
	if (debug)
		ft_printst2(*v);
	return (v->cmd);
}