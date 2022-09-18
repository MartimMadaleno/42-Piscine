/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:33:51 by mmendes-          #+#    #+#             */
/*   Updated: 2022/09/15 13:33:51 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int lenDes;
	int lenSrc;

	lenDes = 0;
	lenSrc = 0;
	while (dest[lenDes] != '\0')
		lenDes++;
	while (src[lenSrc] != '\0')
	{
		dest[lenDes] = src[lenSrc];
		lenDes++;
		lenSrc++;
	}
	dest[lenDes] = '\0';
	return (dest);
}
