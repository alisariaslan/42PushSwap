/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tequila_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:29:47 by ali               #+#    #+#             */
/*   Updated: 2023/02/25 09:20:11 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
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
*/

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

static void	phase_one(t_stack **a_stack, t_stack **b_stack, int average, int i)
{
	average = find_sum(*a_stack) / stack_counter(a_stack);
	i = stack_counter(a_stack);
	while (i)
	{
		if ((*a_stack)->value <= average)
			list_pb(a_stack, b_stack);
		else
			list_ra(a_stack);
		i--;
	}
}

static void	phase_two(t_stack **a_stack, t_stack **b_stack)
{
	int	i;
	int	average;

	average = find_sum(*b_stack) / stack_counter(b_stack);
	i = stack_counter(b_stack);
	while (i)
	{
		if ((*b_stack)->value >= average)
		{
			list_pa(a_stack, b_stack);
			list_ra(a_stack);
		}
		else
			list_rb(b_stack);
		i--;
	}
}

static void	phase_three(t_stack **a_stack, t_stack **b_stack, int transfer,
		int i)
{
	while (transfer > 0)
	{
		list_pa(a_stack, b_stack);
		transfer--;
		i++;
	}
	while (i - 1 > 0)
	{
		list_pa(a_stack, b_stack);
		list_ra(a_stack);
		i--;
	}
	while (stack_counter(b_stack) > 0)
		list_pa(a_stack, b_stack);
}

void	tequila_sort(t_stack **a_stack, t_stack **b_stack)
{
	int	average;
	int	count;
	int	count_b;

	phase_one(a_stack, b_stack, 0, 0);
	average = find_sum(*a_stack) / stack_counter(a_stack);
	count = stack_counter(a_stack);
	phase_two(a_stack, b_stack);
	count_b = stack_counter(b_stack);
	while (count)
	{
		if ((*a_stack)->value >= average)
		{
			list_pb(a_stack, b_stack);
			list_rb(b_stack);
		}
		else
			list_ra(a_stack);
		count--;
	}
	phase_three(a_stack, b_stack, count_b, 0);
}
