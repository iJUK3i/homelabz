#include <unistd.h>

void	ft_comb(void);
void	ft_putchar(char c);
void	dis_char(char x, char y, char z);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	dis_char(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}

void	ft_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while  (c <= '9')
			{
				dis_char(a, b, c);
				if (a != '7' || b != '8' || c != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int		main()
{
	ft_comb();
	write (1, "\n", 1);
	return (0);
}
