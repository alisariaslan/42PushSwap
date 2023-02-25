/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:33:08 by ali               #+#    #+#             */
/*   Updated: 2023/02/25 09:18:50 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	size_check(int argc, char **argv)
{
	int	i;

	i = 1;
	argc--;
	while (argc--)
	{
		if (matoi(argv[i]) > 2147483647)
		{
			writemy("Error: Some values bigger than integers.\n");
			return (0);
		}
		if (matoi(argv[i]) < -2147483648)
		{
			writemy("Error: Some values smaller than integers.\n");
			return (0);
		}
		i++;
	}
	return (1);
}
