# include "pushswap.h"

//converts entered strings into numbers and consequently ranks
//ranks simplify sorting, especially for binary radix.
int	*ft_convert(int argc, char **argv, int	debug)
{
	int	*rankarray = (int *)malloc((argc - 1) * sizeof(int));
	int	j = 0;
	int	rank = 0;
	int	i = 0;

	while (j++, j < argc)
	{
		while 	(i++, i < argc)
		{
			if (atoi(argv[j]) > atoi(argv[i]))
				rank++;
		}
		rankarray[j - 1] = rank;
		rank = 0;
		i =  0;
	}
	if (debug)
	{
		i = -1;
		printf("ranked result: ");
		while (i++, i < argc - 1)
	 		printf("%d ", rankarray[i]);
		printf("\n");
	}
	return (rankarray);
}