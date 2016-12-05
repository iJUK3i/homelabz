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
	int c;
	int d;

	c = '0';
	while (c <= '9')
	{
		d = '0';
		while (d < '9')
		{
			a = '0';
			while (a <= '9')
			{
				b = '1';
				while (b < '9')
				{
					put_all(c, d, ' ');
					put_all(a, b, ',');
					ft_putchar(' ');
					b++;
				}
				put_all(c, d, ' ');
				put_all(a, b, ',');
				ft_putchar(' ');
				b++;
				a++;
				if ((a == '9') && (b == '9'))
				{
					if ((c == '9') && (d == '8'))
					{
						put_all(c, d, ' ');
						put_all(a, b, ',');
						break;
					}
					ft_putchar(a);
					ft_putchar(b);
					break;
				}
			}
			d++;
		}
		c++;
	}
}

int		main()
{
	ft_print_comb2();
	return (0);
}
