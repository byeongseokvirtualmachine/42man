int	ft_str_is_printable(char *str)
{
	int		i;
	char	a;

	i = 0;
	while (str[i] != '\0')
	{
		a = str[i];
		if (!(a >= ' ' && a <= '~'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
