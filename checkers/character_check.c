/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:31:50 by ali               #+#    #+#             */
/*   Updated: 2023/02/16 13:32:53 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_characters(char **argv)
{
	int		arg;
	int		c;
	char	indexchar;

	arg = 0;
	c = 0;
	while (argv[arg])
	{
		if (argv[arg][0] == '-' && argv[arg][1] > 47 && argv[arg][1] < 58)
			c++;
		while (argv[arg][c])
		{
			indexchar = argv[arg][c];
			if (indexchar < 48 || indexchar > 57)
				return (0);
			c++;
		}
		c = 0;
		arg++;
	}
	return (1);
}

int	character_check(int argc, char **argv)
{
	int	i;

	(void)argc;
	i = 0;
	while (!check_characters(&argv[++i]))
	{
		writemy("Error: Some arguments is not integers.\n");
		return (0);
	}
	return (1);
}
