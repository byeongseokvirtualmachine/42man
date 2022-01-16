
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long long	cnt;
	long long	minnum;
	long long	maxnum;
	int			*rtn;

	maxnum = max;
	minnum = min;
	if (maxnum - minnum <= 0)
	{
		*range = 0;
		return (0);
	}
	rtn = (int*)malloc(sizeof(int) * (maxnum - minnum));
	if (rtn == 0)
		return (-1);
	cnt = 0;
	while (cnt < maxnum - minnum)
	{
		rtn[cnt] = (int)(minnum + cnt);
		cnt++;
	}
	*range = rtn;
	return ((int)cnt);
}
