#include "juk3.h"

void	ft_swap_int(int *src, int *dst)
{
	int temp;

	temp = *src;
	*src = *dst;
	*dst = temp;
}
