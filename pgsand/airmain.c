#include "juk3.h"

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;
	int b;

	b = size;
	i = 0;
	j = i + 1;
	while (b > i)
	{
		ft_putstr(" _in da loop_ \n");
	ft_putnbr(tab[0]);// should output 1
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(tab[1]);// should be 2
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(tab[2]);// this one 3
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(tab[3]);// here 4
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(tab[4]);// 5
	ft_putchar(',');
	ft_putchar(' ');
	ft_putchar('\n');
		if (tab[i] < tab[j])
		{
			ft_putstr("1fs\n");
			i++;
		}
		ft_putchar('\n');
		ft_putstr("value of i= ");
		ft_putnbr(i);
		ft_putchar('\n');
	ft_putnbr(tab[0]);// should output 1
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(tab[1]);// should be 2
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(tab[2]);// this one 3
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(tab[3]);// here 4
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(tab[4]);// 5
	ft_putchar(',');
	ft_putchar(' ');
	ft_putchar('\n');
		if (tab[i] > tab[j])
		{
			ft_putstr(" $in da if$ \n");
	ft_putnbr(tab[0]);// should output 1
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(tab[1]);// should be 2
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(tab[2]);// this one 3
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(tab[3]);// here 4
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(tab[4]);// 5
	ft_putchar(',');
	ft_putchar(' ');
	ft_putchar('\n');
			ft_putstr("start da swap\n");
			temp = tab[j];
			tab[j] = tab[i];
			tab[i] = temp;
			ft_putstr("end swap\n");
			ft_putstr("swp value i= ");
			ft_putnbr(i);
			ft_putchar('\n');
	ft_putnbr(tab[0]);// should output 1
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(tab[1]);// should be 2
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(tab[2]);// this one 3
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(tab[3]);// here 4
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(tab[4]);// 5
	ft_putchar(',');
	ft_putchar(' ');
	ft_putchar('\n');
		}
//		i = 0
		i++;
	}
}

int		main()
{
	int arr[5];

	arr[0] = 5;
	arr[1] = 4;
	arr[2] = 3;
	arr[3] = 2;
	arr[4] = 1;
	ft_sort_int_tab(arr, 5);// after ft it should be
	ft_putstr("back in the main\n");
	ft_putnbr(arr[0]);// should output 1
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(arr[1]);// should be 2
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(arr[2]);// this one 3
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(arr[3]);// here 4
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(arr[4]);// 5
	ft_putchar(',');
	ft_putchar(' ');
	ft_putchar('\n');
	return (0);
}
