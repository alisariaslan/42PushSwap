/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:16:29 by ali               #+#    #+#             */
/*   Updated: 2023/02/10 21:42:37 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void writestack(int *stack)
{
}

void sa(int *stack_a)
{
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if(!count_check(argc) || !character_check(argc,argv) || !size_check(argc-1,argv))
        return 0;

   
   

    int a_stack[argc - 1];
    int b_stack[argc - 1];

    int tc = argc - 1;
    i = 1;
    while (tc--)
    {
        long long value = matoi(argv[i]);
        a_stack[i - 1] = value;
        i++;
    }

    /*
    while (*argv)
    {
        printf("%s\n", *argv);
        //a[i] = matoi(*argv);
        i++;
        argv++;
    }
    */

    return 0;
}