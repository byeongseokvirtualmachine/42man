#include <stdio.h>

#include "ft_str_is_printable.c"


int		main(void)
{
	char *str_valid;
	char *str_invalid;

	str_valid = "Hell0";
	str_invalid = "hello\7F";
	printf("should be 1: %d\n", ft_str_is_printable(str_valid));
	printf("should be 0: %d\n", ft_str_is_printable(str_invalid));
}
