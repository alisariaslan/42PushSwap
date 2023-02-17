/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:02:07 by msariasl          #+#    #+#             */
/*   Updated: 2023/02/17 12:11:34 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	counter(int *step_counter, int *step_reverser, t_stack ***my_stack)
{
	while (*step_counter)
	{
		(*step_counter)--;
		(*step_reverser)++;
		list_ra(*my_stack);
	}
}

static void	reverser(int *step_reverser, t_stack ***my_stack)
{
	while (*step_reverser)
	{
		list_rra(*my_stack);
		(*step_reverser)--;
	}
}

static void	single_sort(t_stack **my_stack)
{
	t_stack	*temp;
	t_stack	*next;
	int		step_counter;
	int		step_reverser;

	temp = *my_stack;
	step_counter = 0;
	step_reverser = 0;
	while (temp->next)
	{
		next = temp->next;
		if (temp->value > next->value)
		{
			counter(&step_counter, &step_reverser, &my_stack);
			list_sa(my_stack);
			while (step_reverser)
			{
				list_rra(my_stack);
				step_reverser--;
			}
		}
		temp = temp->next;
		step_counter++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a_stack;
	t_stack	*b_stack;
	t_stack	*temp;

	if (!count_check(argc) || !character_check(argc, argv) || !size_check(argc,
			argv) || !clone_check(argc, argv))
		return (0);
	a_stack = create_stack(argc, argv);
	listwrite(a_stack, b_stack);
	single_sort(&a_stack);
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