#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (1)
	{
		if (*str == '\0')
			break ;
		str++;
		i++;
	}
	return (i);
}

int	main(void)
{
	char s[] = "abc";
	printf("%d", ft_strlen(s));
}
