/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_string_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:20:58 by ali               #+#    #+#             */
/*   Updated: 2023/02/23 01:35:27 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	count_numbers(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if ((str[i] >= 48 && str[i] <= 57) || str[i] == '-')
		{
			while ((str[i] >= 48 && str[i] <= 57) || str[i] == '-')
				i++;
			n++;
		}
		i++;
	}
	return (n);
}

static void	pass_numbers(char *str, char ***ntable)
{
	int		i;
	int		nt;
	int		new_size;
	char	*new;
	int		t;

	i = 0;
	nt = 0;
	new = (char *)malloc((sizeof(char) * 11) + 1);
	new = "./push_swap\0";
	(*ntable)[nt] = new;
	nt++;
	while (str[i])
	{
		if ((str[i] >= 48 && str[i] <= 57) || str[i] == '-')
		{
			new_size = 0;
			while ((str[i] >= 48 && str[i] <= 57) || str[i] == '-')
			{
				i++;
				new_size++;
			}
			new = (char *)malloc((sizeof(char) * new_size) + 1);
			i -= new_size;
			t = 0;
			while (new_size)
			{
				new[t] = str[i];
				t++;
				i++;
				new_size--;
			}
			new[t] = 0;
			(*ntable)[nt] = new;
			nt++;
		}
		i++;
	}
	(*ntable)[nt] = 0;
}

char	**convert_multiple(char *str, int *argc)
{
	int nc = count_numbers(str);
	if (nc > 1)
	{
		(*argc) = 0;
		char **ntable = (char **)malloc((sizeof(char *) * nc) + 2);
		pass_numbers(str, &ntable);
		int i = 0;
		while (ntable[i])
		{
			(*argc)++;
			i++;
		}
		return (ntable);
	}

	return (0);
}
