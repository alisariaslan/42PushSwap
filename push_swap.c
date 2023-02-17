/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:02:07 by msariasl          #+#    #+#             */
/*   Updated: 2023/02/17 17:08:16 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	stack_counter(t_stack **my_stack)
{
	int		i;
	t_stack	*temp;

	if (*my_stack)
	{
		i = 0;
		temp = *my_stack;
		while (temp)
		{
			temp = temp->next;
			i++;
		}
		return (i);
	}
	return (0);
}

int	shift_min(t_stack **my_stack)
{
	t_stack	*temp;
	int		min_value;
	int		index;
	int		min_index;
	int		shift;

	index = 0;
	min_index = 0;
	if (*my_stack)
	{
		temp = *my_stack;
		min_value = temp->value;
		while (temp)
		{
			if (min_value > temp->value)
			{
				min_value = temp->value;
				min_index = index;
			}
			index++;
			temp = temp->next;
		}
		shift = stack_counter(my_stack) - min_index;
		if (shift > min_index)
			shift = min_index * -1;
		mrintf("\t-> min_value:%d\n", min_value);
		mrintf("\t-> shift_value:%d\n", shift);
		return (shift);
	}
	return (0);
}

static void	easy_sort(t_stack **a_stack, t_stack **b_stack)
{
	t_stack	*next;
	t_stack	*temp;
	int		shift;

	if (*a_stack)
	{
		next = (*a_stack)->next;
		if (((*a_stack))->value > next->value)
			list_sa(a_stack);
		shift = shift_min(a_stack);
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
		list_pb(a_stack, b_stack);
		list_pb(a_stack, b_stack);
		list_pb(a_stack, b_stack);
		list_pb(a_stack, b_stack);
		list_pb(a_stack, b_stack);
		list_pb(a_stack, b_stack);
		
	}
	//if (*a_stack)
	//	easy_sort(a_stack, b_stack);
}

int	main(int argc, char **argv)
{
	t_stack	*a_stack;
	t_stack	*b_stack;

	if (!count_check(argc) || !character_check(argc, argv) || !size_check(argc,
			argv) || !clone_check(argc, argv))
		return (0);
	a_stack = create_stack(argc, argv);
	listwrite(a_stack, b_stack);
	easy_sort(&a_stack, &b_stack);
	listwrite(a_stack, b_stack);
}

/*
	PDF SORT
	list_sa(&a_stack);
	list_pb(&a_stack,&b_stack);
	list_pb(&a_stack,&b_stack);
	list_pb(&a_stack,&b_stack);
	list_sa(&a_stack);
	list_pa(&a_stack,&b_stack);
	list_pa(&a_stack,&b_stack);
	list_pa(&a_stack,&b_stack);
	*/
/*
	MY SORT
	list_sa(&a_stack);
	list_ra(&a_stack);
	list_ra(&a_stack);
	list_ra(&a_stack);
	list_sa(&a_stack);
	list_rra(&a_stack);
	list_rra(&a_stack);
	list_rra(&a_stack);
	*/

/*
	BEFORE LIST
	int	main(int argc, char **argv)
	{
		int	*a;
		int	*b;

		if (!count_check(argc) || !character_check(argc, argv)
			|| !size_check(argc,
			argv) || !clone_check(argc, argv))
		return (0);
		a = fill_stack(argc, argv);
		b = fill_empty(argc);
		stackwrite(a, b, argc);
		sa(a);
		stackwrite(a, b, argc);
		return (0);
	}
	*/