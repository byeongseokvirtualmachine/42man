/*
strncat(dest, origin, size_t) : origin에 문자열 n개를 dest뒤 이어 붙임.
*/
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int digit;
	unsigned int i;
	unsigned int j;

	digit = 0;
	while (dest[digit] != '\0')
	{
		digit++;
	}
	i = digit;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
