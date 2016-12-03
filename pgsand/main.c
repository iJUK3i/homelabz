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
		if (tab[i] > tab[size - 1])
		{
			temp = tab[size - 1];
			tab[size -1] = tab[i];
			tab[i] = temp;
		}
		i = 0;
	}
}

int		main()
{
	int	arr[3];
	arr[0] = 9001;
	arr[1] = 760;
	arr[2] = -5;
	ft_sort_int(arr, 3);

	ft_putnbr(arr[0]);
	ft_putchar('\n');
	ft_putnbr(arr[1]);
	ft_putchar('\n');
	ft_putnbr(arr[2]);
	ft_putchar('\n');
	return (0);
}
