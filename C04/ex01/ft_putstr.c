#include <unistd.h>

void	ft_putstr(char *str)
{
	char	a;

	a = 0;
	while (1)
	{
		a = *str;
		if (a == '\0')
			break ;
		write(1, &a, 1);
		str++;
	}
}
