/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:17:03 by daguiar-          #+#    #+#             */
/*   Updated: 2022/09/11 11:22:59 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	if_handler(int x, int y, int cx, int cy)
{
	if (cy == 1 || cy == y)
	{
		if (cx == 1 || cx == x)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (cx == 1 || cx == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{	
	int	cx;
	int	cy;

	cx = 1;
	cy = 1;
	while (cy <= y)
	{
		while (cx <= x)
		{
			if_handler(x, y, cx, cy);
			cx++;
		}
		ft_putchar('\n');
		cx = 1;
		cy++;
	}
}
