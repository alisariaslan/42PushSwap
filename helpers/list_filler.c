/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_filler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:29:37 by msariasl          #+#    #+#             */
/*   Updated: 2023/02/16 18:53:20 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*add_stack(void)
{
	t_stack	*new_empty_stack;

	new_empty_stack = (t_stack *)malloc(sizeof(t_stack));
	return (new_empty_stack);
}

t_stack	*create_stack(int argc, char **argv)
{
	int		i;
	t_stack	*stack_list;
	t_stack	*stack_start;

	stack_list = (t_stack *)malloc(sizeof(t_stack));
	stack_start = stack_list;
	i = 1;
	while (argv[i])
	{
		stack_list->value = matoi(argv[i]);
		stack_list->next = add_stack();
		stack_list = stack_list->next;
		i++;
	}
	stack_list->next = 0;
	return (stack_start);
}
