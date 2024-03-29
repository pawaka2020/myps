# include "../pushswap.h"

/*
Shift down all elements of stack a by 1.
The last element becomes the first one.
*/
char	*ft_rra(t_psvars *v, int debug)
{
	int	i;

	i = v->sizea - 1;
	if (v->sizea > 1)
	{
		while (i > 0)
		{
			v->i0 = v->a[i];
			v->i1 = v->a[i - 1];
			v->a[i] = v->i1;
			v->a[i - 1] = v->i0;
			i--;
		}
	}
	v->cmd = "rra\n";
	v->count = v->count + 1;
	if (debug)
		ft_presult(*v);
	return (v->cmd);
}