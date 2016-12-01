#include <unistd.h>

void	ft_nbrs(void);

void	ft_nbrs(void)
{
	int x;
	int i;

	x = '0';
	i = 0;
	while (i <= 9)
	{
		write (1, &x, 1);
		x++;
		i++;
	}
	write (1, "\n", 1);
}

int		main()
{
	ft_nbrs();
	return (0);
}
