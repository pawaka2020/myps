# include "pushswap.h"

void ft_printst(t_psvars v)
{
	int	i;

	i = -1;
	while(i++, i < v.size)
		printf("%s %s\n", v.stacka[i], v.stackb[i]);
	printf("_ _\na b\n");
}

void ft_buildst(t_psvars *v, int argc, char **argv, int test)
{
	int	i;

	i = -1;
	v->size = argc - 1;
	v->sizea = v->size;
	v->sizeb = 0;
	v->stacka = malloc((v->size) * sizeof(char *));
	v->stackb = malloc((v->size) * sizeof(char *));
	while (i++, i < v->size)
	{
	 	v->stacka[i] = argv[i + 1];
		v->stackb[i] = " ";
	}
	if (test)
		ft_printst(*v);
}

void ft_sort(t_psvars v, char *algo)
{
	if (algo == "test")
		ft_test(v);
}

void ft_startfdf(int argc, char **argv)
{
	t_psvars v;
	
	ft_buildst(&v, argc, argv, 1);
	ft_sort(v, "test");
	free(v.stacka);
	free(v.stackb);
}