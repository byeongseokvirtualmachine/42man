#include <unistd.h>

void	ft_is_negative(int n)
{
	char	compare;

	if (n < 0)
	{
		compare = 'N';
		write(1, &compare, 1);
	}
	else if (n >= 0)
	{
		compare = 'P';
		write(1, &compare, 1);
	}
}
