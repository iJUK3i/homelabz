#include "juk3.h"

char	*ft_strrev(char *str)
{
	char	*rev;

	if (!str || !*str)
		ft_putstr("no null data thats lazy");
	
	rev = str;
	
	while (*rev)
		rev++;
	rev--;
	ft_putstr("start w l");
	
	while (*rev)
	{
		write (1, rev, 1);
		rev--;
	}
	
	ft_putchar('\n');
	ft_putstr("a w l");
	ft_putchar('\n');
	
	ft_putchar('\n');
	ft_putstr("above");
	
	return (str);
}

int		main()
{
	char *str2;
	char *str;

	str2 = "this is back to the main";
	str = "remain calm and keep coding!";
	ft_strrev(str);
	ft_putstr(str2);
	ft_putstr(str);
	return (0);
}


























