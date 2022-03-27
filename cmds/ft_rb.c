# include "../pushswap.h"

/*
Shift up all elements of stack b by 1.
The first element becomes the last one.
*/
char	*ft_rb(t_psvars *v, int debug)
{
	int	i;

	i = 0;
	if (v->sizeb > 1)
	{
		while (i < v->sizeb - 1)
		{
			v->i0 = v->b[i];
			v->i1 = v->b[i + 1];
			v->b[i] = v->i1;
			v->b[i + 1] = v->i0;
			i++;
		}
	}
	v->cmd = "rb\n";
	if (debug)
		ft_printst2(*v);
	return (v->cmd);
}