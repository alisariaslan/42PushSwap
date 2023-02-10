/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:33:08 by ali               #+#    #+#             */
/*   Updated: 2023/02/10 21:38:38 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int size_check(int argc,char **argv)
{
    int i = 0;
    while (argc--)
    {
        long long value = matoi(argv[i]);
        if (value > 2147483647 || value < -2147483648)
        {
            writemy("Error: Some values bigger than integers.\n");
            return 0;
        }
        i++;
    }
    return 1;
}
