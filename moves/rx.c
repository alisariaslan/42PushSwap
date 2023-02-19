/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rx.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 02:13:10 by msariasl          #+#    #+#             */
/*   Updated: 2023/02/19 10:03:09 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	list_ra(t_stack **start)
{
	int	temp;

	if (*start)
	{
		if ((*start)->next)
		{
			temp = (*start)->value;
			del_first(start);
			add_last(start, temp);
			if (SHOW_MOVES)
				mrintf("ra\n");
		}
	}
}

void	list_rb(t_stack **start)
{
	int	temp;

	if (*start)
	{
		if ((*start)->next)
		{
			temp = (*start)->value;
			del_first(start);
			add_last(start, temp);
			if (SHOW_MOVES)
				mrintf("rb\n");
		}
	}
}

void	list_rr(t_stack **a_stack, t_stack **b_stack)
{
	list_ra(a_stack);
	list_rb(b_stack);
}
