#include "juk3.h"

char	*ft_strrev(char *str)
{
	char temp;
	int i;
	int j;

	i = 0;
	j = ft_strlen(str) - 1;
	if (!str || !*str)
		ft_putstr("revstr:error null data");
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j--;
		i++;
	}
	return (str);
}
