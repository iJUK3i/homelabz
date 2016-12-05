#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);

int		main()
{
	ft_putnbr(-28);
	write (1, "\n", 1);
	ft_putnbr(-209875);
	ft_putchar('\n');
	ft_putnbr(-123453458);
	ft_putchar('\n');
	ft_putnbr(923453458);
	ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}
