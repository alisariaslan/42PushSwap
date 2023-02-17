/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sx.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:27:00 by ali               #+#    #+#             */
/*   Updated: 2023/02/17 02:11:32 by msariasl         ###   ########.fr       */
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
	t_stack	*next;
	int		temp;

	if (*start)
	{
		temp = (*start)->value;
		if ((*start)->next)
		{
			next = (*start)->next;
			(*start)->value = next->value;
			next->value = temp;
			if (SHOW_MOVES)
				mrintf("sa\n");
		}
	}
}

void	list_sb(t_stack **start)
{
	t_stack	*next;
	int		temp;

	if ((*start))
	{
		temp = (*start)->value;
		if ((*start)->next)
		{
			next = (*start)->next;
			(*start)->value = next->value;
			next->value = temp;
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
