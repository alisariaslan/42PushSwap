/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:02:07 by msariasl          #+#    #+#             */
/*   Updated: 2023/02/24 00:11:03 by ali              ###   ########.fr       */
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

static void	clear_argv(char ***argv, int single_arg)
{
	int		i;
	int		z;
	void	*adr;

	z = 0;
	if (single_arg && *argv)
	{
		i = 0;
		while ((*argv)[i])
			i++;
		while (i > 0)
		{
			free((*argv)[i]);
			z++;
			i--;
		}
		free(*argv);
	}
}

static int	argv_fighter(int *argc, int *single_arg, char ***argv)
{
	if (*argc == 2)
	{
		*argv = convert_multiple((*argv)[1], argc);
		*single_arg = 1;
	}
	if (!count_check(*argc) || !character_check(*argc, *argv)
		|| !size_check(*argc, *argv) || !clone_check(*argc, *argv))
	{
		clear_argv(argv, *single_arg);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		single_arg;
	t_stack	*a_stack;
	t_stack	*b_stack;
	int		i;

	if (argv_fighter(&argc, &single_arg, &argv))
		return (0);
	a_stack = create_stack(argc, argv);
	listwrite(a_stack, b_stack);
	if (!if_sorted(a_stack))
	{
		tequila_sort(&a_stack, &b_stack);
		amel_sort(&a_stack, &b_stack);
	}
	listwrite(a_stack, b_stack);
	clear_stack(&a_stack);
	clear_stack(&b_stack);
	clear_argv(&argv, single_arg);
}
