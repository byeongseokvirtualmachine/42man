
int	ft_ten_queens_puzzle(void)
{
	unsigned int idx;

	idx = 2;
	if (nb <= 1)
		return (0);
	while (idx <= (nb / 2))
	{
		if (nb % idx == 0)
			return (0);
		idx++;
	}
	return (1);
}
