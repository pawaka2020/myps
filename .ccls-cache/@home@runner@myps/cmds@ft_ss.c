# include "../pushswap.h"

/*
sa and sb at the same time
*/
char	*ft_ss(t_psvars *v, int debug)
{
	v->cmd = ft_sa(v, 0);
	v->cmd = ft_sb(v, 0);
	v->cmd = "ss\n";
	v->count = v->count - 1;
	if (debug)
		ft_presult(*v);
	return (v->cmd);
}