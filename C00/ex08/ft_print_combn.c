/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 17:04:10 by seoh              #+#    #+#             */
/*   Updated: 2022/01/15 00:07:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char g_arr[9];
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_outchar(char *arr, int n)
{
	int i;
	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i]);
		i++;
	}
}
void setarray(int n)
{
	int i;
	int j;
	i = n - 1;
	while (i >= 0)
	{
		if (g_arr[i] < '9' - n + 1 + i)
		{
			g_arr[i]++;
			j = i + 1;
			while (j < n)
			{
				g_arr[j] = g_arr[i] + j - i;
				j++;
			}
			break;
		}
		i--;
	}
}
void ft_print_combn(int n)
{
	int i;
	i = 0;
	while (i < 9)
	{
		g_arr[i] = '0' + i;
		i++;
	}
	while (1)
	{
		ft_outchar(g_arr, n);
		if (g_arr[0] == '9' - n + 1)
			break;
		write(1, ", ", 2);
		setarray(n);
	}
}

int main()
{
	ft_print_combn(2);
	return (0);
}
