/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:56:09 by ali               #+#    #+#             */
/*   Updated: 2023/02/11 11:51:31 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int *fill_stack(int argc, char **argv)
{
    int *stack = (int *)malloc(sizeof(int) * argc );
    int i = 0;
    while (argv[i])
    {
        stack[i] = matoi(argv[i]);
        //printf("%d, %s\n",stack[i],argv[i]);
        i++;
    }
    return stack;
}

int *fill_empty(int argc)
{
    int *stack = (int *)malloc(sizeof(int) * argc);
    return stack;
}