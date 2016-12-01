#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
	write (1, "\n", 1);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	ft_swap(char *a, char *b)
{
	char temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

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


























