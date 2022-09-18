/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:17:25 by mmendes-          #+#    #+#             */
/*   Updated: 2022/09/08 17:42:08 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	write_char(char n)
{
	write(1, &n, 1);
}

void	ft_result(char a, char b, char c)
{
	bool	last_char;

	write_char(a);
	write_char(b);
	write_char(c);
	last_char = !(a == '7' && b == '8' && c == '9');
	if (last_char)
	{
		write_char(',');
		write_char(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_result(a, b, c);
				c++;
			}
			b ++;
			c = b + 1;
		}
		b = a + 1;
		a++;
	}
}
