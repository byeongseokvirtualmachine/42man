char	*ft_strlowcase(char *str)
{
	int		i;
	char	a;

	i = 0;
	while (str[i] != '\0')
	{
		a = str[i];
		if (a >= 'A' && a <= 'Z')
		{
			str[i] = a + 32;
		}
		i++;
	}
	return (str);
}
