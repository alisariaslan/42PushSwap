/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   px.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:42:57 by msariasl          #+#    #+#             */
/*   Updated: 2023/02/17 13:04:14 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	list_pb(t_stack **a_stack, t_stack **b_stack)
{
	int		temp;

	if (a_stack[0] != 0)
	{
		temp = a_stack[0]->value;
		del_first(a_stack);
		add_first(b_stack, temp);
		if (SHOW_MOVES)
			mrintf("pb\n");
	}
}

void	list_pa(t_stack **a_stack, t_stack **b_stack)
{
	int		temp;

	if (b_stack[0] != 0)
	{
		temp = b_stack[0]->value;
		del_first(b_stack);
		add_first(a_stack, temp);
		if (SHOW_MOVES)
			mrintf("pa\n");
	}
}
