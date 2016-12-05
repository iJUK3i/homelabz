#include <unistd.h>

void	put_all(char x, char y, char z);
void	ft_putchar(char c);
void	ft_print_comb2(void);

void	put_all(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b < '9')
		{
			put_all(a, b, ',');
			b++;
		}
		put_all(a, b, ' ');
		b++;
		a++;
		if (a == '9' && b == '9')
		{
			put_all(a, b, ' ');
			break;
		}
	}
	write (1, "matrix\n", 7);
}

int		main()
{
	ft_print_comb2();
	return (0);
}
