/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matoi.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:10:42 by ali               #+#    #+#             */
/*   Updated: 2023/02/10 21:34:32 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long long matoi(char *arg)
{
    int i = 0;
    while (arg[++i])
        ;
    i--;
    long long total = 0;
    long long stair = 1;
    while (arg[i] > 47 && arg[i] < 58)
    {
        int n = arg[i--] - 48;
        total += n * stair;
        stair *= 10;
    }
    if (arg[0] == '-')
        total *= -1;
    return total;
}
