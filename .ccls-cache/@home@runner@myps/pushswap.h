#ifndef PUSHSWAP_H
# define PUSHSWAP_H
//# define INT_MAX 2147483647
# define INT_MAX 99

#include <stdio.h>
#include <stdlib.h>

/*
Variables to be used for the
push_swap program
*/
typedef struct s_psvars
{
	char	**stacka;
	char	**stackb;
	int	size;
	int	sizea;
	int	sizeb;
	char	*s0;
	char	*s1;
	char	*cmd;
}t_psvars;
//core functions
void	ft_startfdf(int argc, char **argv);
void	ft_perror(char *str);
void	ft_printst(t_psvars v);
//algos
void	ft_test(t_psvars v);
void	ft_pdf(t_psvars v);
void	ft_insertion(t_psvars v);
//commands
char	*ft_sa(t_psvars *v, int test);
char	*ft_sb(t_psvars *v, int test);
char	*ft_ss(t_psvars *v, int test);
char	*ft_pa(t_psvars *v, int test);
char	*ft_pb(t_psvars *v, int test);
char	*ft_ra(t_psvars *v, int test);
char	*ft_rra(t_psvars *v, int test);
char	*ft_rb(t_psvars *v, int test);
char	*ft_rrb(t_psvars *v, int test);
char	*ft_rr(t_psvars *v, int test);
char	*ft_rrr(t_psvars *v, int test);

#endif
