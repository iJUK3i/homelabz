#include "juk3.h"

char	*ft_strrev(char *str)
{
//	char	*end;
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
//		end = rev;
		write (1, rev, 1);
//		end[i] = rev[j];
		rev--;
//		end++;
//		i++;
	}
	ft_putchar('\n');
	ft_putstr(str);
	ft_putstr("a w l");
	ft_putchar('\n');
//	end[i + 1] = '\0';
	ft_putchar('\n');
	ft_putstr("above");
//	return (end);
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


























