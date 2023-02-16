/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_writer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:16:29 by ali               #+#    #+#             */
/*   Updated: 2023/02/16 19:37:34 by msariasl         ###   ########.fr       */
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

	while (start->next != 0)
	{
		spaces = fill_chars('.', 12);
		mrintf("%d%s |\n", start->value, getspaces(start->value, spaces));
		start = start->next;
	}
	free(spaces);
}

void	listwrite(t_stack *a_stack, t_stack *b_stack)
{
	t_stack			*start;
	static t_ull	count = 1;
	static t_ull	doubt = 0;

	if (doubt % 2 == 0)
		start = a_stack;
	else
		start = b_stack;
	if (doubt % 2 == 0)
		mrintf("\n%d.\n", count++);
	mrintf("____________\n");
	write_iterate_stack(start);
	mrintf("____________|");
	if (doubt % 2 == 0)
		mrintf("\n(a)\n");
	else
		mrintf("\n(b)\n");
	if (b_stack != 0)
		doubt++;
	if (doubt % 2 != 0)
		listwrite(a_stack, b_stack);
}
