/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:56:09 by ali               #+#    #+#             */
/*   Updated: 2023/02/14 00:39:21 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*fill_stack(int argc, char **argv)
{
	int	*stack;
	int	i;

	argc--;
	argv++;
	stack = (int *)malloc(sizeof(int) * argc);
	i = 0;
	while (argv[i])
	{
		stack[i] = matoi(argv[i]);
		i++;
	}
	return (stack);
}

int	*fill_empty(int argc)
{
	int	*stack;

	argc--;
	stack = (int *)malloc(sizeof(int) * argc);
	return (stack);
}

char	*fill_chars(char c, t_ull size)
{
	t_ull	i;
	char	*filled;

	i = 0;
	filled = malloc(sizeof(char) * size + 1);
	filled[size] = 0;
	while (i < size)
	{
		filled[i] = c;
		i++;
	}
	return (filled);
}
