#include "juk3.h"

int		ft_atoi(char *str)
{
	int i;
	int nb;
	int neg;

	i = 0;
	nb = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == 45)
		neg = 1;
	if (str[i] == 45 || str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb *= 10;
		nb += ((int)str[i] - 48);
		i++;
	}
	if (neg == 1)
		return (-nb);
	else
		return (nb);
}

int		main(int argc, char **str)
{
	int a;

	a = ft_atoi(str[1]);
	if (argc > 1)
	{
		ft_putnbr(a);
		ft_putchar('\n');
	}
	return (0);
}

