/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amel_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 09:56:45 by ali               #+#    #+#             */
/*   Updated: 2023/02/23 00:34:10 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	if_sorted(t_stack *my_stack)
{
	t_stack	*temp;
	t_stack	*next;

	if (my_stack)
	{
		temp = my_stack;
		while (temp)
		{
			next = temp->next;
			if (next)
			{
				if (next->value < temp->value)
					return (0);
			}
			temp = next;
		}
		return (1);
	}
	return (1);
}

static void	sort_phase_one(t_stack **a_stack, t_stack **b_stack, int shift)
{
	t_stack	*next;

	if ((*a_stack)->value > (*a_stack)->next->value)
	{
		list_sa(a_stack);
	}
	else
	{
		shift = shift_min(a_stack, 0, 0);
		while (shift > 0)
		{
			list_rra(a_stack);
			shift--;
		}
		while (shift < 0)
		{
			list_ra(a_stack);
			shift++;
		}
		if (!if_sorted(*a_stack))
			list_pb(a_stack, b_stack);
	}
}

static void	sort_phase_two(t_stack **a_stack, t_stack **b_stack, int shift)
{
	list_pa(a_stack, b_stack);
}

void	amel_sort(t_stack **a_stack, t_stack **b_stack)
{
	while (stack_counter(a_stack) > 0 && !if_sorted(*a_stack))
	{
		if (*a_stack)
			sort_phase_one(a_stack, b_stack, 0);
	}
	while (stack_counter(b_stack) > 0)
	{
		if (*b_stack)
			sort_phase_two(a_stack, b_stack, 0);
	}
}
