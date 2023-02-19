/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:02:07 by msariasl          #+#    #+#             */
/*   Updated: 2023/02/19 20:34:08 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	clear_stack(t_stack **stack)
{
	t_stack	*prev;

	while (*stack)
	{
		prev = ((*stack));
		if ((*stack)->next)
			(*stack) = (*stack)->next;
		else
			*stack = 0;
		free(prev);
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a_stack;
	t_stack	*b_stack;

	if (!count_check(argc) || !character_check(argc, argv) || !size_check(argc,
			argv) || !clone_check(argc, argv))
		return (0);
	a_stack = create_stack(argc, argv);
	if (SHOW_RESULT)
		listwrite(a_stack, b_stack);
	//amel_sort(&a_stack, &b_stack);
	tequila_sort(&a_stack,&b_stack);
	if (SHOW_RESULT)
		listwrite(a_stack, b_stack);
	clear_stack(&a_stack);
	clear_stack(&b_stack);
}
