#include "juk3.h"

int		main(int nb_arg, char **str)
{
	if (nb_arg > 1)
	{
		int i;
		int j;
		
		i = 0;
//		ft_putstr("we have input\n");
		while (str[i])
			i++;
		i--;
//		ft_putnbr(i);
//		ft_putchar('\n');
//		ft_putchar(str[i - 1][0]);
//		ft_putchar(str[i - 1][1]);
//		ft_putchar(str[i - 1][2]);
//		ft_putchar(str[i - 1][3]);
//		ft_putchar(str[i - 1][4]);
//		ft_putchar('\n');
		j = 0;
		str[j] = '\0';
		while (str[i])
		{
			ft_putstr(str[i]);
			ft_putchar(' ');
			i--;
		}
//		ft_putstr("\n fin \n");
		return (0);
	}
}
