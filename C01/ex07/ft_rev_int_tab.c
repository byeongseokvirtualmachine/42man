void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

#include <stdio.h>
int main()
{
	int c[] = {2, 9, 3, 4};
	ft_rev_int_tab(c, 4);
	for(int i = 0 ; i < 4 ; i++)
		printf("%d",c[i]);
}
