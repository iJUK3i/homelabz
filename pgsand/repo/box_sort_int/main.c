#include "juk3.h"

void	ft_sort_int(int *tab, int size)
{
	int i;
	int u;
	int temp;

	i = 0;
	while (i < size)
	{
		u = i + 1;
		while (u < size)
		{
			if (tab[i] > tab[u])
			{
				temp = tab[i];
				tab[i] = tab[u];
				tab[u] = temp;
			}
			u++;
		}
		i++;
	}
}


int		main()
{
	int arr[7];

	arr[0] = 42;
	arr[1] = 27;
	arr[2] = 0;
	arr[3] = 9001;
	arr[4] = -5;
	arr[5] = 6;
	arr[6] = 1;

	ft_sort_int(arr, 7);

	ft_putstr("\nascending order: ");
	ft_putnbr(arr[0]);
	ft_putstr(", ");
	ft_putnbr(arr[1]);
	ft_putstr(", ");
	ft_putnbr(arr[2]);
	ft_putstr(", ");
	ft_putnbr(arr[3]);
	ft_putstr(", ");
	ft_putnbr(arr[4]);
	ft_putstr(", ");
	ft_putnbr(arr[5]);
	ft_putstr(", ");
	ft_putnbr(arr[6]);
	ft_putstr(" \n");
	ft_putstr(" \n");
	return (0);
}
