#include "juk3.h"
int		ft_recursive_factorial(int nb)
{
	int i;
	int *x;
//	int sum;

//	ft_putstr("\n value of nb =  ");
//	ft_putnbr(nb);
//	ft_putchar('\n');
// it is segfaulting in current state but does infinite loop with above 

	x = &nb;
	i = 1;
	if (nb <= -1 || nb >= 13)
		return (0);
	if (nb == 1 || nb == 0)
		return (0);
	if (nb >= 2 || nb <= 12)
		return (x * ft_recursive_factorial(x - 1));
	//	if (i < nb)
	//	{
	//		sum = ft_recursive_factorial(nb * i);
	//		i++;
	//		ft_recursive_factorial(sum);
	//	}
}

int		main(int nb_arg, char **input)
{
	int nb;
	
	if (nb_arg > 1)
	{

		ft_putstr("\n");
		ft_putstr(input[1]);
		nb = ft_atoi(input[1]);
		ft_putstr("\n your input is: \n");
		ft_putnbr(nb);
		ft_putchar('\n');
		nb = ft_recursive_factorial(nb);
		ft_putnbr(nb);
		ft_putchar('\n');
		return (0);
	}
}
