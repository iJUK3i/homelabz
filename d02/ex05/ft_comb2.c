#include <unistd.h>

void	ft_comb2(void);
void	ft_putchar(char c);
void	dis_char(char j, char k, char l);

void	ft_comb2(void)
{
	int w;
	int x;
	int y;
	int z;

	w = '0';
	while (w < '9')
	{
		x = '0';
		while (x <= '9')
		{
			y = '0';
			while (y < '9')
			{
				z = '0';
				while (z <= '9')
				{
					if (z != 9 && y != 9)
					{
						z++;
					}
					dis_char(w, x, ' ');
					dis_char(y, z, ',');
					write (1, " ", 1);
				}
				if (y != '9')
				{
					y++;
				}
			}
			x++;
		}
		if (w != '9')
			w++;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	dis_char(char j, char k, char l)
{
	ft_putchar(j);
	ft_putchar(k);
	ft_putchar(l);
}

int		main()
{
	ft_comb2();
	write (1, "\n", 1);
	return (0);
}
