/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:29:44 by mmendes-          #+#    #+#             */
/*   Updated: 2022/09/12 20:20:07 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *xp, int *yp)
{
	int	temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (size <= 1)
	{
		return ;
	}
	while (i < size - 1)
	{
		while (j < size - i -1)
		{
			if (tab[j] > tab[j + 1])
				swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
	ft_sort_int_tab(tab, size - 1);
}
