#include "juk3.h"

void	ft_sort_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	if (i < size)
	{
		while (tab[i] > tab[i + 1] && tab[i + 1] != '\0')
		{	
			tab[i] > tab[i + 1] ? (ft_swap_int(tab[i + 1], tab[i])) : (i++);
			ft_putstr("tern op above");
			ft_putnbr(tab[0]);
			ft_putnbr(tab[1]);
			ft_putnbr(tab[2]);
			ft_putnbr(tab[3]);
			ft_putnbr(tab[4]);
			ft_putchar('\n');
		}
		i++;
		ft_sort_int_tab(tab, size);
	}
}

int		main()
{
	int size;
	int arr[5];

	size = 5;
	arr[0] = 9;
	arr[1] = 8;
	arr[2] = 7;
	arr[3] = 6;
	arr[4] = 5;
	ft_sort_int_tab(arr, size);
	ft_putnbr(arr[0]);
	ft_putnbr(arr[1]);
	ft_putnbr(arr[2]);
	ft_putnbr(arr[3]);
	ft_putnbr(arr[4]);
}
