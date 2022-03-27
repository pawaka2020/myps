# include "../pushswap.h"

/*
Shift up all elements of stack a by 1.
The first element becomes the last one.
*/
char	*ft_ra(t_psvars *v, int test)
{
	int	i;

	i = 0;
	if (v->sizea > 1)
	{
		while (i < v->sizea - 1)
		{
			v->s0 = v->stacka[i];
			v->s1 = v->stacka[i + 1];
			v->stacka[i] = v->s1;
			v->stacka[i + 1] = v->s0;
			i++;
		}
	}
	v->cmd = "ra\n";
	if (test)
		ft_printst(*v);
	return (v->cmd);
}