/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:33:25 by mmendes-          #+#    #+#             */
/*   Updated: 2022/09/24 15:45:43 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	size_counter(char **strs, int size)
{
	int	counter;
	int	i;

	counter = 0;
	while (--size >= 0)
	{
		i = -1;
		while (strs[size][++i])
			counter++;
	}
	return (counter);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	counter;
	int	i;

	i = 0;
	counter = 0;
	while (dest[counter] != '\0')
		counter++;
	while (src[i] != '\0')
	{
		dest[counter] = src[i];
		i++;
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	i = -1;
	if (size == 0)
		return ((char *)malloc(0));
	str = (char *)malloc(sizeof(char) * (size_counter(strs, size) \
	+ ft_strlen(sep) * (size)));
	str[0] = 0;
	while (++i < size - 1)
	{
		str = ft_strcat(str, strs[i]);
		str = ft_strcat(str, sep);
	}
	str = ft_strcat(str, strs[i]);
	return (str);
}
