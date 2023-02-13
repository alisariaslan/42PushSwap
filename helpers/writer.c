/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:16:29 by ali               #+#    #+#             */
/*   Updated: 2023/02/14 00:48:28 by ali              ###   ########.fr       */
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

static char	*getspaces(long long val, char *spaces)
{
	int	i;

	i = 10;
	if (val < 0)
		val *= -10;
	while (val > 0)
	{
		val /= 10;
		spaces[i] = 0;
		i--;
	}
	return (spaces);
}

void	stackwrite(int *a, int *b, int size, int count)
{
	int		i;
	int		s;
	char	*spaces;

	i = 0;
	s = size - 1;
	spaces = fill_chars('.', 11);
	mrintf("\n%d.\n", 1);
	mrintf("____________  ____________\n");
	while (s--)
	{
		mrintf("%d%s | |%d\n", a[i], getspaces(a[i], spaces), b[i]);
		i++;
	}
	mrintf("____________| |____________");
	mrintf("\n(a)            (b)\n");
}
