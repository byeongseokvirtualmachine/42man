int	ft_str_is_numeric(char *str)
{
	int		i;
	char	a;

	i = 0;
	while (str[i] != '\0')
	{
		a = str[i];
		if (!(a >= '0' && a <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
