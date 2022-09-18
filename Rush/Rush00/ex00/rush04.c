/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:17:30 by daguiar-          #+#    #+#             */
/*   Updated: 2022/09/11 17:05:02 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	if_handler(int x, int y, int cx, int cy)
{
	if ((cy == 1 && cx == 1) || (cy == y && cx == x && cx != 1 && cy != 1))
		ft_putchar('A');
	else if ((cy == 1 && cx == x) || (cy == y && cx == 1))
		ft_putchar('C');
	else if ((cx > 1 && cx < x) && (cy > 1 && cy < y))
		ft_putchar(' ');
	else
		ft_putchar('B');
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
