/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:12:36 by mmendes-          #+#    #+#             */
/*   Updated: 2022/09/25 19:19:04 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*p;

	len = 0;
	while (src[len])
		len++;
	p = malloc(len * sizeof(char));
	len = 0;
	while (src[len])
	{
		p[len] = src[len];
		len++;
	}
	p[len] = '\0';
	return (p);
}
