#include <stdio.h>
#include "ft_str_is_alpha.c"

int		main(void)
{
	char *str_valid;
	char *str_invalid;

	str_valid = "Hello";
	str_invalid = "Hell0";
	printf("should be 1: %d\n", ft_str_is_alpha(str_valid));
	printf("should be 0: %d\n", ft_str_is_alpha(str_invalid));
}
