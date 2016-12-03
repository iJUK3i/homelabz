#include "juk3.h"

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int temp;
	int r;
	int remp;

	r = size;
	i = 0;
	if (i < size)
	{
		j = i + 1;
		while (tab[i] > tab[j])
		{	
			while (tab[i] > tab[j + 1])
			{
				while (tab[i] > tab[j])
				{
					ft_putstr("inMwl\n");
					temp = tab[i];
					tab[i] = tab[j];
					tab[j] = temp;
					tab[j + 1] != '\0' ? i++ : break;
				}
				i = 0;
				ft_putstr("__+1l\n");
				temp = tab[i];
				tab[i] =
			}
		}
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
	ft_putstr("bak in da main\n");
	ft_putnbr(arr[0]);
	ft_putnbr(arr[1]);
	ft_putnbr(arr[2]);
	ft_putnbr(arr[3]);
	ft_putnbr(arr[4]);
	ft_putchar('\n');
}

/*
 *			ft_putnbr(tab[0]);
			ft_putnbr(tab[1]);
			ft_putnbr(tab[2]);
			ft_putnbr(tab[3]);
			ft_putnbr(tab[4]);
*/
