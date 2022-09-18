/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:33:59 by mmendes-          #+#    #+#             */
/*   Updated: 2022/09/15 13:33:59 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int getLen(char *arr)
{
    int i;

    i = 0;
    while(arr[i] != '\0')
    {
        i++;
    }
    return i;
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    deslen = getLen(dest);
    unsigned int    srclen = getLen(src);
    unsigned int	i;
	
	deslen = getLen(dest);
	srclen = getLen(src);
	if (size <= deslen)
		return (size + srclen);
	else
	{
        i = 0;
		while ((i + 1 < (size - deslen)) && (src[i] != '\0'))
		{
			dest[deslen + i] = src[i];
			i++;
		}
		dest[deslen + i] = '\0';
	}
	return (deslen + srclen);
}
