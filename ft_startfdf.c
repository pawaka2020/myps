# include "pushswap.h"

// void ft_printst(t_psvars v)
// {
// 	int	i;

// 	i = -1;
// 	while(i++, i < v.size)
// 		printf("%s %s\n", v.stacka[i], v.stackb[i]);
// 	printf("_ _\na b\n");
// }

void ft_presult(t_psvars v)
{
	int	i;

	i = -1;
	printf("a: ");
	while(i++, i < v.size)
		if (v.a[i] != -1)
			printf("%d ", v.a[i]);		
	printf("\nb: ");
	i = -1;
	while(i++, i < v.size)
		if (v.b[i] != -1)
			printf("%d ", v.b[i]);
	printf("\n");
}

void ft_buildst(t_psvars *v, int argc, char **argv, int test)
{
	int	i;

	i = -1;
	v->size = argc -1;
	v->sizea = v->size;
	v->sizeb = 0;
	v->a = ft_convert(argc, argv, 0);
	v->b = (int *)malloc((v->size) * sizeof(int));
	while (i++, i < v->size)
		v->b[i] = -1;
	v->count = 0;
	if (test)
		ft_presult(*v);
}

void ft_sort(t_psvars v, int showresult)
{
	if (ft_alreadysorted(v) == 0)
	{
		if (v.size < 6)
			ft_insertion(v, showresult);
		else
			ft_binaryradix(v, showresult);
	}
}

void ft_startfdf(int argc, char **argv, int showresult)
{
	t_psvars	v;
	
	ft_buildst(&v, argc, argv, 0);
	ft_sort(v, showresult);
	free(v.a);
	free(v.b);
}