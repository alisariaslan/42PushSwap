/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matoi.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:10:42 by ali               #+#    #+#             */
/*   Updated: 2023/02/14 00:47:23 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long long	matoi(char *arg)
{
	int			i;
	long long	total;
	long long	stair;
	int			n;

	i = 0;
	while (arg[++i])
		;
	i--;
	total = 0;
	stair = 1;
	while (arg[i] > 47 && arg[i] < 58)
	{
		n = arg[i--] - 48;
		total += n * stair;
		stair *= 10;
	}
	if (arg[0] == '-')
		total *= -1;
	return (total);
}
