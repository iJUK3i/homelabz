#include "juk3.h"

int		main(int nb_arg, char **str)
{
	int i;

	i = 1;
	printf("mem addr = %p\n", &i);
	if (nb_arg > 1)
	{
		ft_putstr("we have input\n");
		while (str[i])
		{
			ft_putstr(str[i]);
			ft_putchar(' ');
			i++;
		}
		ft_putstr("\nfin\n");
		return (0);
	}
}
