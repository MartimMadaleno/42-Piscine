/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:31:01 by mmendes-          #+#    #+#             */
/*   Updated: 2022/09/25 19:18:00 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	len;
	int	i;

	if (min >= max)
		return (0);
	len = max - min;
	p = malloc(len * sizeof(int));
	i = -1;
	while (i++ < len)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
