/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 20:58:33 by mmendes-          #+#    #+#             */
/*   Updated: 2022/09/18 21:03:49 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main( int argc, char **argv)
{
	char	*str;

	str = argv[0];
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	return (0);
}
