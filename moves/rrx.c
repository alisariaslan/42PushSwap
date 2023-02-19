/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 02:28:03 by msariasl          #+#    #+#             */
/*   Updated: 2023/02/19 10:05:20 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	list_rra(t_stack **start)
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
				mrintf("rra\n");
		}
	}
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
