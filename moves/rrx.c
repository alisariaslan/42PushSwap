/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 02:28:03 by msariasl          #+#    #+#             */
/*   Updated: 2023/02/17 03:58:28 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*list_rra(t_stack **start)
{
	t_stack *temp_stack;
	int	temp;

	if (*start)
	{
		if ((*start)->next)
		{
			temp = get_last(start);
			del_last(start);
			temp_stack = add_first(start, temp);
			if (SHOW_MOVES)
				mrintf("rra\n");
			return temp_stack;
		}
	}
	return 0;
}

void	list_rrb(t_stack **start)
{
	int	temp;

	if (*start)
	{
		if ((*start)->next)
		{
			temp = get_last(start);
			del_last(start);
			add_first(start, temp);
			if (SHOW_MOVES)
				mrintf("rrb\n");
		}
	}
}

void	list_rrr(t_stack **a_stack, t_stack **b_stack)
{
	list_rra(a_stack);
	list_rrb(b_stack);
}
