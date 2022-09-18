/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 21:04:03 by mmendes-          #+#    #+#             */
/*   Updated: 2022/09/18 21:07:57 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main( int argc, char **argv)
{
	int		i;
	char	*str;

	i = 1;
	while (i <= argc - 1)
	{
		str = argv[i];
		while (*str != '\0')
		{
			write(1, str, 1);
			str++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
