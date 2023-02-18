/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shifter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 09:58:42 by ali               #+#    #+#             */
/*   Updated: 2023/02/18 10:01:24 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	shift_min(t_stack **my_stack, int index, int min_index)
{
	int		min_value;
	int		shift;
	t_stack	*temp;

	if (*my_stack)
	{
		temp = *my_stack;
		min_value = temp->value;
		while (temp)
		{
			if (min_value > temp->value)
			{
				min_value = temp->value;
				min_index = index;
			}
			index++;
			temp = temp->next;
		}
		shift = stack_counter(my_stack) - min_index;
		if (shift > min_index)
			shift = min_index * -1;
		return (shift);
	}
	return (0);
}
