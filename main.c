# include "pushswap.h"

void	ft_perror(char *str)
{
	printf("Error: %s\n", str);
	exit (0);
}

int ft_valid(int c, char **v)
{
	int	i;
	int	j;
	
	i = -1;
	j = 0;
	if (c < 2)
		return (0);
	while (j++, j < c)
	{
		while (i++, v[j][i] != 0)
		{
			if (v[j][i] != '-')
				if (v[j][i] < '0' || v[j][i] > '9')
					return (0);
			if (v[j][i] == '-' && i != 0)
				return (0);
		}
		i = -1;
	}
	return (1);
}



int main(int argc, char **argv) 
{
	int	*rankarray;
	
	if (!ft_valid(argc, argv))
		ft_perror("invalid parameter");
	printf("fdf started\n");
	// rankarray = ft_convert(argc, argv, 1);
	// free(rankarray);
	ft_startfdf(argc, argv);
}