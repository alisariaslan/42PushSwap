/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sx.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:27:00 by ali               #+#    #+#             */
/*   Updated: 2023/02/19 09:35:42 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	array_sa(int *a)
{
	int	temp;

	temp = a[0];
	a[0] = a[1];
	a[1] = temp;
	if (SHOW_MOVES)
		mrintf("sa\n");
}

void	list_sa(t_stack **start)
{
	int	temp;

	if (*start)
	{
		if ((*start)->next)
		{
			temp = (*start)->value;
			(*start)->value = (*start)->next->value;
			(*start)->next->value = temp;
			if (SHOW_MOVES)
				mrintf("sa\n");
		}
	}
}

void	list_sb(t_stack **start)
{
	int	temp;

	if (*start)
	{
		if ((*start)->next)
		{
			temp = (*start)->value;
			(*start)->value = (*start)->next->value;
			(*start)->next->value = temp;
			if (SHOW_MOVES)
				mrintf("sb\n");
		}
	}
}

void	list_ss(t_stack **a_stack, t_stack **b_stack)
{
	list_sa(a_stack);
	list_sb(b_stack);
}
