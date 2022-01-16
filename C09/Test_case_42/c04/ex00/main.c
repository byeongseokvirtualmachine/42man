
#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"

int	main(void)
{
	char *str;

	str = "Hello ";
	printf("string is \"%s\"\n", str);
	printf("c  : %lu\n", strlen(str));
	printf("ft : %d\n", ft_strlen(str));
}
