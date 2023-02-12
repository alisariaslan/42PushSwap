/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:16:29 by ali               #+#    #+#             */
/*   Updated: 2023/02/12 21:47:04 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    int *a;
    int *b;

    if (!count_check(argc) || !character_check(argc, argv) || !size_check(argc - 1, argv))
        return 0;

    a = fill_stack(argc - 1, argv + 1);
    b = fill_empty(argc - 1);

    stackwrite(a, b, argc - 1, 1);
    /*
        int i = 0;
        while (argv[i + 1])
            printf("a: %d\n", a[i++]);
        i = 0;
        while (argv[i + 1])
            printf("b: %d\n", b[i++]);
    */

    return 0;
}