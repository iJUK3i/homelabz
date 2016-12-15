#include "juk3.h"

int		ft_is_prime(int nb)
{
	int i;
	int flag;

	i = 2;
	flag = 0;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 1)
		return (0);
	if (flag == 0)
		return (1);
	return (0);
}

int		main()
{
	int x;

	x = ft_is_prime(59);
	ft_putnbr(x);
	ft_putchar('\n');
	x = ft_is_prime(27);
	ft_putnbr(x);
	ft_putchar('\n');
	x = ft_is_prime(5);
	ft_putnbr(x);
	ft_putchar('\n');
	x = ft_is_prime(3);
	ft_putnbr(x);
	ft_putchar('\n');
	x = ft_is_prime(4);
	ft_putnbr(x);
	ft_putchar('\n');
	x = ft_is_prime(2);
	ft_putnbr(x);
	ft_putchar('\n');
	return (0);
}


