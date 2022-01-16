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
