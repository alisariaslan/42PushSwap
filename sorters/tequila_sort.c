/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tequila_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:29:47 by ali               #+#    #+#             */
/*   Updated: 2023/02/20 00:02:14 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	find_above(t_stack *start, int value, int equality)
{
	int	count;

	count = 0;
	if (start)
	{
		if (equality)
		{
			if (start->value > value)
				count++;
		}
		else if (start->value >= value)
			count++;
		while (start->next)
		{
			start = start->next;
			if (equality)
			{
				if (start->value > value)
					count++;
			}
			else if (start->value >= value)
				count++;
		}
		return (count);
	}
	return (-1);
}

static int	find_below(t_stack *start, int value, int equality)
{
	int	count;

	count = 0;
	if (start)
	{
		if (equality)
		{
			if (start->value < value)
				count++;
		}
		else if (start->value <= value)
			count++;
		while (start->next)
		{
			start = start->next;
			if (equality)
			{
				if (start->value < value)
					count++;
			}
			else if (start->value <= value)
				count++;
		}
		return (count);
	}
	return (-1);
}

static int	find_min(t_stack *start)
{
	int	min;

	min = 0;
	if (start)
	{
		min = start->value;
		while (start->next)
		{
			start = start->next;
			if (start->value < min)
				min = start->value;
		}
	}
	return (min);
}

static int	find_max(t_stack *start)
{
	int	max;

	max = 0;
	if (start)
	{
		max = start->value;
		while (start->next)
		{
			start = start->next;
			if (start->value > max)
				max = start->value;
		}
	}
	return (max);
}

static int	find_sum(t_stack *my_stack)
{
	t_ll	total;

	if (my_stack)
	{
		total = my_stack->value;
		while (my_stack->next)
		{
			my_stack = my_stack->next;
			total += my_stack->value;
		}
		return (total);
	}
	return (0);
}

void	tequila_sort(t_stack **a_stack, t_stack **b_stack)
{
	int min = find_min(*a_stack);
	int max = find_max(*a_stack);
	int sum = find_sum(*a_stack);
	int count = stack_counter(a_stack);
	int average = (sum / count);

	int above = find_above(*a_stack, average, 0);
	int below = find_below(*a_stack, average, 0);

	mrintf("min:%d max:%d count:%d sum:%d\n", min, max, count, sum);
	mrintf("average:%d above:%d below:%d\n", average, above, below);

	int i = stack_counter(a_stack);
	while (i)
	{
		if ((*a_stack)->value > average)
			list_pb(a_stack, b_stack);
		list_ra(a_stack);
		i--;
	}

	while (!if_sorted(*a_stack))
	{
		if ((*a_stack)->value > (*a_stack)->next->value)
			list_sa(a_stack);

		else if (!if_sorted(*a_stack))
			list_ra(a_stack);

		
	}

}