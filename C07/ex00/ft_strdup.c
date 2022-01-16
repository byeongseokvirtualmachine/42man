
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
		idx++;
	return (idx);
}

char	*ft_strdup(char *src)
{
	int		idx;
	char	*dest;

	if ((dest = (char*)malloc(ft_strlen(src) * sizeof(char) + 1)) == NULL)
		return (0);
	idx = 0;
	while (src[idx])
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}
