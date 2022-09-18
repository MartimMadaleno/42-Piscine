/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:04:50 by mmendes-          #+#    #+#             */
/*   Updated: 2022/09/12 15:24:17 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_array[10];

void	rec(int prev, int n, int g_lenght)
{
	int	i;

	if (n == g_lenght)
	{
		write(1, g_array, g_lenght);
		write(1, ", ", 2);
		return ;
	}
	if (prev == 9)
		return ;
	i = prev;
	while (++i <= 10 - g_lenght + n)
	{
		g_array[n] = '0' + i;
		rec(i, n + 1, g_lenght);
	}
}

void	print_last(int i)
{
	char	c;

	while (i <= 9)
	{
		c = '0' + i++;
		write(1, &c, 1);
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	g_lenght;

	i = 0;
	g_lenght = n;
	while (i < 10 - n)
	{
		g_array[0] = '0' + i;
		rec(i++, 1, g_lenght);
	}
	print_last(i);
}
