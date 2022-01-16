
#include <stdio.h>
#include "ft_is_negative.c"

int		main(void)
{
	printf(" : ft_isnegative(1)");
	ft_is_negative(1);
	printf("\n");
	printf(" : ft_isnegative(0)");
	ft_is_negative(0);
	printf("\n");
	printf(" : ft_isnegative(-1)");
	ft_is_negative(-1);
	printf("\n");
}
