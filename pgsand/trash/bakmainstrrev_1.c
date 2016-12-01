#include "juk3.h"

char	*ft_strrev(char *str)
{
	int i;
	int j;
	char tmp;

	if (!str || !*str)
		ft_putstr("no null data thats lazy");
	

	
	i = 0;
	j = ft_strlen(str) - 1;
	ft_putnbr(j);
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;		
	}
	i--;

	ft_putnbr(j);
	write (1, "\n", 1);
	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr("after w l");

	ft_putchar('\n');


//	while (i >= 0)
//	{
//		str[j] = rev[i--];
//		j++;
//	}


	ft_putchar('\n');
	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr("a w l");
	ft_putchar('\n');

	ft_putchar('\n');
	ft_putstr("above");

	return (str);
}

int		main()
{
	char str[] = "remain calm and keep coding!";
	char str2[] = " awl should match below v";

//	str = "remain calm and keep coding!";
	ft_strrev(str);
	ft_strrev(str2);	
	ft_putchar('\n');
	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr(str2);
	ft_putchar('\n');
	return (0);
}


























