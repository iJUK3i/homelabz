#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **str)
{
	int a;
	a = atoi(str[1]);

	if (argc > 1)
	{
		printf("%d\n", a);
	}
	return (0);
}
