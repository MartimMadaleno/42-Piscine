/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:33:46 by mmendes-          #+#    #+#             */
/*   Updated: 2022/09/11 18:03:58 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	rush(int comp, int alt);

int	check_string(char *arg, int *i)
{
	*i = 0;
	while (arg[*i] != '\0')
	{
		if (!(arg[*i] >= '0' && arg[*i] <= '9') || arg[0] == '0' )
		{
			write(1, "Invalid Parameters, please insert a valid integer!\n", 51);
			return (0);
		}
		*i = *i + 1;
	}
	return (1);
}

int	check_parse_to_int(char *arg, int len, int *res_int)
{
	char	*max_num;

	*res_int = 0;
	len = 0;
	max_num = (char [10]){'2', '1', '4', '7', '4', '8', '3', '6', '4', '7'};
	while (arg[len] != '\0')
	{
		if (len > 9 || (len == 9 && (arg[len] > max_num[len])))
		{
			write(1, "Integer too big, please insert a valid one!\n", 44);
			return (0);
		}
		*res_int *= 10;
		*res_int += arg[len] - '0';
		len++;
	}
	return (1);
}

int	intify(int *res, char *arg)
{
	int	len;
	int	res_int;

	*res = check_string(arg, &len);
	if (*res == 1)
	{
		*res = check_parse_to_int(arg, len, &res_int);
		if (*res == 1)
		{
			return (res_int);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (0);
	}
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;
	int	res_x;
	int	res_y;

	if (argc != 3)
	{
		write(1, "Invalid parameters!\n", 20);
		return (0);
	}
	x = intify(&res_x, argv[1]);
	y = intify(&res_y, argv[2]);
	if (res_x == 1 && res_y == 1)
	{
		rush(x, y);
	}
	else
	{
		write(1, "Error occurred!\n", 16);
		return (0);
	}
	return (1);
}
