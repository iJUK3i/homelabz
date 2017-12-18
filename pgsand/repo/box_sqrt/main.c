#include "juk3.h"

int	ft_sqrt(int nb)
{
	int low;
	int mid;
	int high;

	if (nb <= 0)
		return (0);
	low = 1;
	high = nb;
	while (low <= high)
	{
		mid = (low + high) >> 1;
	if (mid * mid == nb)
		return (mid);
	if (mid * mid > nb)
		high = mid - 1;
	else
		low = mid + 1;
	}
	return (high);
}

int		main()
{
	int x;

	x = ft_sqrt(36);
	ft_putnbr(x);
	ft_putchar('\n');
	x = ft_sqrt(3);
	ft_putnbr(x);
	ft_putchar('\n');
	x = ft_sqrt(363);
	ft_putnbr(x);
	ft_putchar('\n');
	x = ft_sqrt(-36);
	ft_putnbr(x);
	ft_putchar('\n');
	return (0);
}

