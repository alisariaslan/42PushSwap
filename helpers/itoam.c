/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoam.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:54:59 by ali               #+#    #+#             */
/*   Updated: 2023/02/14 00:47:11 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*itoam(long long n)
{
	int		malsize;
	t_ull	steps;
	char	*new;

	malsize = 1;
	if (n < 0)
	{
		n *= -1;
		malsize++;
	}
	steps = step_counter(n);
	if (malsize == 2)
		steps++;
	new = malloc(sizeof(char) * steps + malsize);
	new[steps--] = 0;
	if (malsize == 2)
		new[0] = '-';
	while (n > 10)
	{
		new[steps--] = n % 10 + 48;
		n /= 10;
	}
	new[steps--] = n % 10 + 48;
	return (new);
}
