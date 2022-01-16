
char	*ft_strupcase(char *str)
{
	int		i;
	char	a;

	i = 0;
	while (str[i] != '\0')
	{
		a = str[i];
		if (a >= 'a' && a <= 'z')
		{
			str[i] = a - 32;
		}
		i++;
	}
	return (str);
}
