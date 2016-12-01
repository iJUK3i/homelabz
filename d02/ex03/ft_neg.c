#include <unistd.h>

void ft_neg(int n);

void ft_neg(int n)
{
	if (n < 0)
		write (1, "N", 1);
	else
		write (1, "P", 1);
}

int	main()
{
	ft_neg(-9);
	write(1, "\n", 1);
	ft_neg(1270);
	write(1, "\n", 1);
	return (0);
}
