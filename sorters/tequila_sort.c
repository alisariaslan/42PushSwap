/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tequila_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:29:47 by ali               #+#    #+#             */
/*   Updated: 2023/02/21 21:57:57 by ali              ###   ########.fr       */
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
	int average;
	int average_ab;
	int count_ab;
	int transfer;
	int i;
	
	
	average = find_sum(*a_stack) / stack_counter(a_stack);
	i = stack_counter(a_stack);
	mrintf("1. count:%d average:%d below:%d above:%d\n",i,average,find_below(*a_stack,average,0),find_above(*a_stack,average,1));
	while (i)
	{
		if ((*a_stack)->value >= average)
			list_pb(a_stack, b_stack);
		else
			list_ra(a_stack);
		i--;
	}

	average_ab = find_sum(*a_stack) / stack_counter(a_stack);
	count_ab = stack_counter(a_stack);
	mrintf("1/2. count_ab:%d average_ab:%d below:%d above:%d\n",count_ab,average_ab,find_below(*a_stack,average_ab,1),find_above(*a_stack,average_ab,0));
	
	transfer = 0;
	average = find_sum(*b_stack) / stack_counter(b_stack);
	i = stack_counter(b_stack);
	mrintf("3. count:%d average:%d below:%d above:%d\n",i,average,find_below(*a_stack,average,0),find_above(*a_stack,average,1));
	while(i)
	{
		if((*b_stack)->value <= average)
		{
			list_pa(a_stack,b_stack);
			transfer++;
		}
		else
			list_rb(b_stack);
		i--;
	}

	average = find_sum(*b_stack) / stack_counter(b_stack);
	i = stack_counter(b_stack);
	mrintf("4. count:%d average:%d below:%d above:%d\n",i,average,find_below(*a_stack,average,0),find_above(*a_stack,average,1));

	while(transfer)
	{
		list_ra(a_stack);
		transfer--;
	}

	while(count_ab)
	{
		if ((*a_stack)->value <= average_ab)
		{
			list_pb(a_stack, b_stack);
			transfer++;
		}
		else
			list_ra(a_stack);
		count_ab--;
	}

	i = 0;
	while(transfer)
	{
		list_rb(b_stack);
		transfer--;
		i++;
	}

	while(i)
	{
		list_pa(a_stack,b_stack);
		transfer++;
		i--;
	}

	while(transfer)
	{
		list_pa(a_stack,b_stack);
		list_ra(a_stack);
		transfer--;
	}

	

	

	

	
	
}