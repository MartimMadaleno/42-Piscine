/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 21:10:31 by mmendes-          #+#    #+#             */
/*   Updated: 2022/09/18 21:10:32 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main( int argc, char **argv)
{
	int		i;
	char	*str;

	i = 1;
	argc--;
	while (i <= argc)
	{
		str = argv[argc];
		while (*str != '\0')
		{
			write(1, str, 1);
			str++;
		}
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
