/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:57:16 by ali               #+#    #+#             */
/*   Updated: 2023/02/15 23:21:12 by ali              ###   ########.fr       */
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

t_ll	step_counter(t_ll n)
{
	t_ll	steps;

	steps = 1;
	if (n < 0)
		n *= -1;
	while (n >= 10)
	{
		n /= 10;
		steps++;
	}
	return (steps);
}
