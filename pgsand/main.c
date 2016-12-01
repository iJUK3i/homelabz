#include "juk3.h"

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int temp;
	int temp2;
	int j;
	int x;

	x = size - 1;
	ft_putnbr(x);
	ft_putchar('\n');
	i = 0;
	j = i + 1;
	while (tab[i])
	{
		if (tab[i] < tab[j])
			i++;
		if (tab[i] < tab[j + 1])
			i++;
		while (tab[i] > tab[j])
		{
			ft_putstr("inMwl\n");
			if (tab[i] > tab[j + 1])
			{
				temp2 = tab[i];
				tab[i] = tab[j + 1];
				tab[j + 1] = temp2;
				i++;
			}
			else
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
		}
	}
}
//			if (temp)
//				ft_putstr("we temp\n");
//			if (temp2)
//				ft_putstr("t2\n");
//			temp = tab[i];
//			tab[i] = tab[j];
//			tab[j] = temp;
//			i++;
//		i = 0;
//		ft_putstr("__+1l\n");
//		temp = tab[i];
//		tab[i] = tab[j
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
