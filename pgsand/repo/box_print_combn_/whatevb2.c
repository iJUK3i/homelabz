#include "juk3.h"

void	ft_sort_int(int *tab, int size);

void	ft_sort_int(int *tab, int size)
{
	int i;
//	int max;
	int temp;
	int end;

	end = size - 1;
	i = 0;
	ft_putnbr(end);
	ft_putstr("\n");
	while (i < size)
	{
		if (tab[i] > tab[i + 1] && tab[i] > tab[end])
		{
			temp = tab[end];
			tab[end] = tab[i];
			tab[i] = temp;
			i = 0;
			ft_putstr("1st  ");
		}
		else if (tab[i] > tab[i + 1] && tab[i] > tab[i + 2])
		{
			temp = tab[i + 2];
			tab[i + 2] = tab[i];
			tab[i] = temp;
			i = 2;
			ft_putstr("2nd  ");
		}
		else if (tab[i] > tab[i + 1])
		{
			temp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			i = 1;
			ft_putstr("3rd  ");
		}
		else
			i++;
	}
}

int		main()
{
	int size;
	int	arr[6];

	size = 6;
	arr[0] = 8;
	arr[1] = 9;
	arr[2] = -5;
	arr[3] = -10;
	arr[4] = 0;
	arr[5] = 42;
	ft_sort_int(arr, size);

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
	ft_putstr(" \n");
	return (0);
}
