#include <unistd.h>

void	ft_help(char a, char b, char c);
void	ft_comb2(void);
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_help(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

int		main(void)
{
	ft_comb2();
	return (0);
}

void ft_comb2(void)
{
	char h;
	char i;
	char j;
	char k;

	k = '0';
	while (k <= '8')
	{
		j = k + '1';
		while (j <= '9')
		{
			write (1, "3", 1);
			i = '0';
			while (i <= '9')
			{
				h = i + '1';
				while (h <= '9')
				{
					ft_help(j, k, ' ');
					write (1, "matrix\n", 7);
					ft_help(h, i, '\n');
					h++;
				}
				i++;
			}
			j++;
		}
		k++;
	}
	write (1, "end\n", 4);
}

