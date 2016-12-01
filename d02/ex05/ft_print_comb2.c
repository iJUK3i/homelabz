#include <unistd.h>

int		ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	nbrs[4] = {0, 0, 0, 1};

	while (!((nbrs[0] == 9) && (nbrs[1] == 9)))
	{
		ft_putchar(nbrs[0] + 48);
		ft_putchar(nbrs[1] + 48);
		ft_putchar(' ');
		ft_putchar(nbrs[2] + 48);
		ft_putchar(nbrs[3] + 48);
		if (!((nbrs[0] == 9) && (nbrs[1] == 8)))
			ft_putchar(',');
		if (!((nbrs[0] == 9) && (nbrs[1] == 8)))
			ft_putchar(' ');
		nbrs[3]++;
		if ((nbrs[3] = nbrs[3] % 10) == 0)
			nbrs[2] = (nbrs[2] + 1);
		if (nbrs[2] == 10)
		{
			nbrs[2] = nbrs[0];
			nbrs[1]++;
			if ((nbrs[1] = nbrs[1] % 10) == 0)
				nbrs[0]++;
			nbrs[3] = nbrs[1] + 1;
		}
	}
}

int		main()
{
	ft_print_comb2();
	return (0);
}
