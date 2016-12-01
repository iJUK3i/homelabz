#include <unistd.h>

void	ft_comb2(void);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_help(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}

void 	ft_comb2(void)
{
	int ab[2];
	int xy[2];

	ab[1] = '1';
	ab[0] = '0';
	xy[0] = '0';
	xy[1] = '0';
	while (xy[0] < '9' && xy[1] < '8')
	{
		while (ab[0] < '9' && ab[1] < '9')
		{
			((ab[1] == '9') ? ab[0]++ : ab[1]++);
			if (ab[0] == '9')
			{
				write (1, "tern!\n", 6);
				break;
			}
			ft_help(ab[0], ab[1], '\n');
		}
		write (1, "v", 1);
	}
	write (1, "iend\n", 5);
}

int		main()
{
	ft_comb2();
	return (0);
}
