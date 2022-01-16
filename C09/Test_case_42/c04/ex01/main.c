
#include <stdio.h>
#include "ft_putstr.c"

int		main(void)
{
	char *str;

	str = "Hello World";
	printf("string is \"%s\"\n",str);
	ft_putstr(str);
	printf("\n");
}
