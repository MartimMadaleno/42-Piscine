/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:41:33 by mmendes-          #+#    #+#             */
/*   Updated: 2022/09/08 17:57:22 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_char(char value)
{
	write(1, &value, 1);
}

void	ft_display(int value)
{
	int	x;
	int	y;

	if (value > 9)
	{
		x = value / 10;
		y = value % 10;
		write_char(x + '0');
		write_char(y + '0');
	}
	else
	{
		write_char('0');
		write_char(value + 48);
	}
}

void	ft_result(int x, int y)
{
	ft_display(x);
	write_char(' ');
	ft_display(y);
	if (x < 98 || y < 99)
	{
		write_char(',');
		write_char(' ');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_result(x, y);
			y++;
		}
		x++;
	}
}
