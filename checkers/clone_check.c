/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clone_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:33:08 by ali               #+#    #+#             */
/*   Updated: 2023/02/16 13:33:03 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	clone_check(int argc, char **argv)
{
	int	i_one;
	int	i_two;
	int	value_one;
	int	value_two;

	(void)argc;
	i_one = 1;
	i_two = 1;
	while (argv[i_one])
	{
		value_one = matoi(argv[i_one]);
		i_two = i_one + 1;
		while (argv[i_two])
		{
			value_two = matoi(argv[i_two]);
			if (value_one == value_two)
			{
				mrintf("Error: All values need to be unique!");
				return (0);
			}
			i_two++;
		}
		i_one++;
	}
	return (1);
}
