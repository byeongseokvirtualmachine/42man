#include <stdio.h>
#include "ft_strupcase.c"

int		main(void)
{
	char	*str_base;
	char	str_upper[6];
	int		index;

	str_base = "heLl0";
	index = 0;
	while (index < 6)
	{
		str_upper[index] = str_base[index] + 0;
		index++;
	}
	ft_strupcase(&str_upper[0]);
	printf("should be normal    : %s\n", str_base);
	printf("should be upper case: %s\n", str_upper);
}
