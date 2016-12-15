#include "juk3.h"

void	ft_sort_int(int *tab, int size);

void	ft_sort_int(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = i + 1;
	while (tab[i] < tab[j])
	{
		i++;
		if (i == size)
			break;
	}
	while (tab[i] > tab[size - 1])
	{
		while (tab[i] > tab[size - 1])
		{
			temp = tab[size - 1];
			tab[size -1] = tab[i];
			tab[i] = temp;
		}
		i = 0;
	}
//	if (i != size)
//		ft_sort_int(tab, size);
}

int		main()
{
	int size;
	int	arr[6];

	size = 6;
	arr[0] = 9001;
	arr[1] = 9760;
	arr[2] = -5;
	arr[3] = -10;
	arr[4] = 0;
	arr[5] = 42;
	ft_sort_int(arr, size);

	ft_putnbr(arr[0]);
	ft_putchar('\n');
	ft_putnbr(arr[1]);
	ft_putchar('\n');
	ft_putnbr(arr[2]);
	ft_putchar('\n');
	ft_putnbr(arr[3]);
	ft_putchar('\n');
	ft_putnbr(arr[4]);
	ft_putchar('\n');
	ft_putnbr(arr[5]);
	ft_putchar('\n');
	return (0);
}
