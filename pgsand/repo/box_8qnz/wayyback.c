#include "juk3.h"

void	ft_sort_int(int *tab, int size);

void	ft_sort_int(int *tab, int size)
{
	int i;
	int j;
	int temp;
	int end;

	end = size - 1;
	i = 0;
	j = i + 1;
	while (i < size)
	{
		if (tab[i] <= tab[j])
			i++;
		else if (tab[i] > tab[end])
		{
			temp = tab[end];
			tab[end] = tab[i];
			tab[i] = temp;
			i = 1;
		}
		else
			ft_putstr("must be error \n");
	}
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

	ft_putstr("ascending order: ");
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
	ft_putstr(" \n");
	return (0);
}
