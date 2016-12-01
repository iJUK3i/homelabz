#include <unistd.h>

void	ft_alf(void);

void	ft_alf(void)
{
	char x;
	int i;

	x = 'a';
	i = 0;
	while (i <= 25)
	{
		write(1, &x, 1);
		x++;
		i++;
	}
	write (1, "\n", 1);	
}

char	main()
{
	ft_alf();
	return (0);
}
