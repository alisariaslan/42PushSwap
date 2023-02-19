/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rx.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 02:13:10 by msariasl          #+#    #+#             */
/*   Updated: 2023/02/18 22:32:01 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*list_ra(t_stack **start)
{
	t_stack	*temp;

	if (*start)
	{
		add_last(start, (*start)->value);
		temp = del_first(start);
		if (SHOW_MOVES)
			mrintf("ra\n");
		return (temp);
	}
	return (0);
}

void	list_rb(t_stack **start)
{
	if (*start)
	{
		add_last(start, (*start)->value);
		del_first(start);
		if (SHOW_MOVES)
			mrintf("rb\n");
	}
}

void	list_rr(t_stack **a_stack, t_stack **b_stack)
{
	list_ra(a_stack);
	list_rb(b_stack);
}
