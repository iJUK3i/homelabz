#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	*buff;

	len = ft_strlen(str);
	buff[i] = str[i];
	i = 0;
	while (str[i] != '\0')
	{
		buff[i] = str[i];
		i++;
	}

	while (len - 1 > i)
	{
	}
	return (str);
}

int		main()
{
	char *str;

	str = "keep coding";
	printf("%s\n", ft_strrev(str));
	return (0);
}
