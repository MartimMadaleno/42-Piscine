/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:28:37 by mmendes-          #+#    #+#             */
/*   Updated: 2022/09/12 20:19:36 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *xp, int *yp)
{
	int	temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	hi;

	i = size - 1;
	hi = 0;
	while (hi < size / 2)
	{
		swap(&tab[hi], &tab[i]);
		i--;
		hi++;
	}
}
