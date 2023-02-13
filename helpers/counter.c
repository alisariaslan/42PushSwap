/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:57:16 by ali               #+#    #+#             */
/*   Updated: 2023/02/14 00:48:09 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_ull	char_counter(char *chars)
{
	t_ull	i;

	i = 0;
	while (chars[i])
	{
		i++;
	}
	return (i);
}

t_ull	step_counter(t_ull n)
{
	t_ull	steps;

	steps = 1;
	while (n > 10)
	{
		n /= 10;
		steps++;
	}
	return (steps);
}
