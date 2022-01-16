unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cnt;
	unsigned int	idx;

	cnt = 0;
	idx = 0;
	while (src[cnt] != '\0')
		cnt++;
	if (size != 0)
	{
		while (src[idx] != '\0' && idx < (size - 1))
		{
			dest[idx] = src[idx];
			idx++;
		}
		dest[idx] = '\0';
	}
	return (cnt);
}
