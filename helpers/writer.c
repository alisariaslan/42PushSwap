/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:16:29 by ali               #+#    #+#             */
/*   Updated: 2023/02/12 21:47:06 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void writemy(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    write(1, s, i);
}

static char *getspaces(long long val, char *spaces)
{
    int i = 10;

    if (val < 0)
        val *= -10;
    while (val > 0)
    {
        val /= 10;
        spaces[i] = 0;
        i--;
    }
    return spaces;
}

void stackwrite(int *a, int *b, int size, int count)
{
    int i = 0;
    int s = size;
    char spaces[11] = "           ";

    printf("\n%d.\n", count);
    printf("____________  ____________\n");
    while (s--)
    {
        printf("%d%s | |%d\n", a[i], getspaces(a[i], spaces), b[i]);
        i++;
    }
    printf("____________| |____________");
    printf("\n(a)            (b)\n");
}
