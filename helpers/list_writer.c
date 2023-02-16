/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_writer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:16:29 by ali               #+#    #+#             */
/*   Updated: 2023/02/17 02:02:22 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static char	*getspaces(int val, char *spaces)
{
	t_ull	count;
	int		steps;
	int		total;
	int		i;

	count = char_counter(spaces);
	if (val < 0)
		val *= -10;
	steps = step_counter(val);
	total = count - steps;
	i = 0;
	while (i < total)
	{
		spaces[i] = '.';
		i++;
	}
	spaces[i] = 0;
	return (spaces);
}

static void	write_iterate_stack(t_stack *start)
{
	char	*spaces;

	while (start)
	{
		spaces = fill_chars('.', 12);
		mrintf("%d%s |\n", start->value, getspaces(start->value, spaces));
		if (start->next)
			start = start->next;
		else
			break ;
		spaces = 0;
		free(spaces);
	}
}

void	listwrite(t_stack *a_stack, t_stack *b_stack)
{
	static t_ull	count = 1;

	mrintf("\t   %d\n", count++);
	mrintf("____________\n");
	if (a_stack)
		write_iterate_stack(a_stack);
	mrintf("____________|\n");
	mrintf("(a)\n");
	mrintf("____________\n");
	if (b_stack)
		write_iterate_stack(b_stack);
	mrintf("____________|\n");
	mrintf("(b)\n\n");
}
