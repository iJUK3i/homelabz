#include <unistd.h>

void	ft_putchar(char c);
void	ft_comb2(void);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while (c != '9')
	{
		while (d < '9')
		{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(' ');
			ft_putchar(c);
			ft_putchar(d);
			ft_putchar(',');
			ft_putchar(' ');
			d++;
		}
		c++;
	}
	

	if (c == '9' && d == '9')
	{
		while (a != '9' && b != '8')
		{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(' ');
			ft_putchar(c);
			ft_putchar(d);
			ft_putchar(',');
			ft_putchar(' ');
			b++;
			if (a == '9' && b == '8')
				break;
			if (b == '9')
				a++;
		}

				
	}
	ft_comb2();
	write (1, "matrix\n", 7);
}

int		main()
{
	ft_comb2();
	write (1, "\n", 1);
	return (0);
}
