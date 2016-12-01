#include "juk3.h"

char	*ft_strrev(char *str)
{
	char	*end;
	char	*rev;
	int		i;
	int		j;

	if (!str || !*str)
		ft_putstr("no null data thats whack");
	rev = str;
	while (*rev)
		rev++;
	rev--;
	ft_putstr("start w l");
	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		ft_swap(&str[i], &str[j]);
		i++;
		j--;
//		end = rev;
//		write (1, rev, 1);
//		end[i] = rev[j];
//		rev--;
//		end++;
//		i++;
	}
	ft_putchar('\n');
	ft_putstr(str);
	ft_putstr("a w l");
	ft_putchar('\n');
//	end[i + 1] = '\0';
	ft_putstr(end);
	ft_putchar('\n');
	ft_putstr("above");
//	return (end);
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


























