#ifndef PUSHSWAP_H
# define PUSHSWAP_H
//# define INT_MAX 2147483647
# define INT_MAX 99

#include <stdio.h>
#include <stdlib.h>

/*
push_swap data structure
*/
typedef struct s_psvars
{
	int		*a;
	int		*b;
	int		i0;
	int		i1;
	int		size;
	int		sizea;
	int		sizeb;
	int		count;
	char	*cmd;
}t_psvars;
//core functions
void	ft_startfdf(int argc, char **argv, int showresult);
void	ft_perror(char *str);
void	ft_presult(t_psvars v);
int	*ft_convert(int argc, char **argv, int	debug);
int	ft_alreadysorted(t_psvars v);
//algos
void	ft_test(t_psvars v);
void	ft_pdf(t_psvars v);
void	ft_insertion(t_psvars v);
void	ft_binaryradix(t_psvars v);
void	ft_showsortresult(t_psvars v);

//commands
char	*ft_sa(t_psvars *v, int debug);
char	*ft_sb(t_psvars *v, int debug);
char	*ft_ss(t_psvars *v, int debug);
char	*ft_pa(t_psvars *v, int debug);
char	*ft_pb(t_psvars *v, int debug);
char	*ft_ra(t_psvars *v, int debug);
char	*ft_rra(t_psvars *v, int debug);
char	*ft_rb(t_psvars *v, int debug);
char	*ft_rrb(t_psvars *v, int debug);
char	*ft_rr(t_psvars *v, int debug);
char	*ft_rrr(t_psvars *v, int debug);

#endif
