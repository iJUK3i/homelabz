#include "juk3.h"

void	ft_sort_int(int *tab, int size)
{
	int i;
	int k;
	int min;
	int max;
	int end;
	int temp;

	end = size - 1;
	i = 0;
	k = 1;
	while (i <= size - 1)
	{
		if (tab[i] > tab[end - 1] && tab[i] < tab[end])
		{
			temp = tab[i];
			tab[i] = tab[end - 1];
			tab[end - 1] = temp;
		}
		if (tab[i] >= tab[i + 1] && tab[i] >= tab[i + 2] &&
			   tab[i] >= tab[end] && tab[i] >= tab[end - 1] && tab[i] >= tab[end - 2])
		{
			max = tab[i];
			temp = tab[i];
			tab[i] = tab[end];
			tab[end] = temp;
		}
		if (tab[i] < tab[i + 1] && tab[i] < tab[i + 2] && tab[i] < tab[end - 2] && tab[i] < tab[end - 1] & tab[i] < tab[end])
		{
			min = tab[i];
			i++;
		}
		if (tab[i] < tab[i + 1] && tab[i] > tab[i + 2] && tab[i + 1] > tab[i] &&
				tab[i + 1] > tab[i + 2])
		{
			temp = tab[i];
			tab[i] = tab[i + 2];
			tab[i + 2] = tab[i + 1];
			tab[i + 1] = temp;
		}
		i++;

//		break;
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

/*
		ft_putnbr(tab[0]);
		ft_putstr(" ");
		ft_putnbr(tab[1]);
		ft_putstr("\n");
*/
