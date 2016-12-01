#include <stdio.h>

void	ft_ult(int *********nbr)
{
	*********nbr = 42;
}

int		main()
{
	int *i;
	int nbr;
	int ptr2;
	int ptr3;
	int ptr4;
	int ptr5;
	int ptr6;
	int ptr7;
	int ptr8;
	int ptr9;

	i = 2;
	nbr = *i;
	ptr2 = *nbr;
	ptr3 = **ptr2;
	ptr4 = ***ptr3;
	ptr5 = ****ptr4;
	ptr6 = *****ptr5;
	ptr7 = ******ptr6;
	ptr8 = *******ptr7;
	ptr9 = ********ptr8;
	printf("%d\n", *i);
	ft_ult(*ptr9);
	printf("%d\n", *i);
	return (0);
}
