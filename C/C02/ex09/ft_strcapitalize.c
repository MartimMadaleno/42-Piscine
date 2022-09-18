/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:14:58 by mmendes-          #+#    #+#             */
/*   Updated: 2022/09/15 12:14:58 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int i;
	int upper;

	i = 0;
	upper = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z') ||
			(str[i] >= '0' && str[i] <= '9'))
		{
			if (upper && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = (str[i] - 32);
			else if (!upper && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = (str[i] + 32);
			upper = 0;
		}
		else
			upper = 1;
		i++;
	}
	return (str);
}