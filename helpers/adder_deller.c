/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adder_deller.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:25:26 by msariasl          #+#    #+#             */
/*   Updated: 2023/02/19 09:23:00 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*del_first(t_stack **start)
{
	t_stack	*prev;

	if (*start)
	{
		if ((*start)->next)
		{
			prev = *start;
			*start = (*start)->next;
			free(prev);
			return (*start);
		}
		else
		{
			free(*start);
			*start = 0;
		}
	}
	return (0);
}

void	del_last(t_stack **start)
{
	t_stack	*last;
	t_stack	*prev;

	if (*start)
	{
		if (stack_counter(start) > 1)
		{
			last = *start;
			while ((last)->next)
			{
				prev = last;
				last = (last)->next;
			}
			prev->next = 0;
			free(last);
		}
		else
		{
			free(*start);
			*start = 0;
		}
	}
}

void	add_first(t_stack **start, int value)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	new->value = value;
	if (*start)
	{
		new->next = *start;
		(*start) = new;
	}
	else
		*start = new;
}

void	add_last(t_stack **start, int value)
{
	t_stack	*new;
	t_stack	*temp;

	new = (t_stack *)malloc(sizeof(t_stack));
	new->value = value;
	if (*start)
	{
		temp = *start;
		while ((*start)->next)
		{
			*start = (*start)->next;
		}
		(*start)->next = new;
		*start = temp;
	}
	else
	{
		*start = new;
	}
}

int	get_last(t_stack **start)
{
	t_stack	*temp;
	int		value;

	value = 0;
	if (*start)
	{
		temp = *start;
		while (*start)
		{
			if ((*start)->next)
				*start = (*start)->next;
			else
			{
				value = (*start)->value;
				break ;
			}
		}
		*start = temp;
	}
	return (value);
}
