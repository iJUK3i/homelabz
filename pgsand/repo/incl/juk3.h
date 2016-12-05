











#ifndef JUK3_H
# define JUK3_H
# define BUF_SIZE 4096

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

struct		s_shelf
{
	char *str;
	char **str2;
};

void	bsq(char *str);
void	bin_bsq(int **arr, char *map, char  *instr);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_map(char *in);
char	*ft_instructions(char *in);
char	*ft_bsq_in(void);
char	full_char(char *str);
char	obs_char(char *str);
char	empty_char(char *str);
char	*make_str(char *new_str);
char	*ft_malloc(int i, char *str);
int		**binary_array(char *map, char *instr);
int		ft_strlen(char *str);
void	ft_swap(char *a, char *b);
char	*ft_strrev(char *str);
void	ft_putnbr(int nb);
int		ft_iter_fact(int nb);
void	ft_swap_int(int src, int dst);
int		ft_atoi(char *str);

#endif
