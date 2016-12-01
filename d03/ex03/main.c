#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main()
{
	int *div;
	int *mod;

	ft_div_mod(10, 4, div, mod);

	write (1, &div, 2);
	write (1, &mod, 2);
	return (0);
}
