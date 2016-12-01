#include <unistd.h>

void	ft_alf_rev(void);

void	ft_alf_rev(void)
{
	char x;
	int i;

	x = 'z';
	i = 0;
	while (i <= 25)
	{
		write (1, &x, 1);
		x--;
		i++;
	}
	write (1, "\n", 1);
}

char	main()
{
	ft_alf_rev();
	return (0);
}
