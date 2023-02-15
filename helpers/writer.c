/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:16:29 by ali               #+#    #+#             */
/*   Updated: 2023/02/15 23:20:22 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	writechar(char c)
{
	write(1, &c, 1);
}

void	writemy(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	write(1, s, i);
}

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

void	stackwrite(int *a, int *b, int size, int count)
{
	int		i;
	int		s;
	char	*spaces;

	i = 0;
	s = size - 1;
	mrintf("\n%d.\n", count);
	mrintf("____________  ____________\n");
	while (s--)
	{
		spaces = fill_chars('.', 12);
		mrintf("%d%s | |%d\n", a[i], getspaces(a[i], spaces), b[i]);
		i++;
	}
	free(spaces);
	mrintf("____________| |____________");
	mrintf("\n(a)            (b)\n");
}
