/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_string_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:20:58 by ali               #+#    #+#             */
/*   Updated: 2023/02/24 00:35:05 by ali              ###   ########.fr       */
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

static void	set_default_arg(char ***ntable, int *nt)
{
	char	*new;

	*nt = 0;
	new = (char *)malloc((sizeof(char) * 11) + 1);
	new = "./push_swap\0";
	(*ntable)[0] = new;
	*nt = 1;
}

static void	too_many_line(char *str, char ***ntable, int *i, int *nt)
{
	char	*new;
	int		new_size;
	int		t;

	new_size = 0;
	while ((str[*i] >= 48 && str[*i] <= 57) || str[*i] == '-')
	{
		(*i)++;
		new_size++;
	}
	new = (char *)malloc((sizeof(char) * new_size) + 1);
	(*i) -= new_size;
	t = 0;
	while (new_size)
	{
		new[t] = str[*i];
		t++;
		(*i)++;
		new_size--;
	}
	new[t] = 0;
	(*ntable)[*nt] = new;
	(*nt)++;
}

static void	pass_numbers(char *str, char ***ntable, int i)
{
	int	nt;

	set_default_arg(ntable, &nt);
	while (str[i])
	{
		if ((str[i] >= 48 && str[i] <= 57) || str[i] == '-')
		{
			too_many_line(str, ntable, &i, &nt);
		}
		i++;
	}
	(*ntable)[nt] = 0;
}

char	**convert_multiple(char *str, int *argc)
{
	int		nc;
	char	**ntable;
	int		i;

	nc = count_numbers(str) + 1;
	if (nc > 1)
	{
		(*argc) = 0;
		ntable = (char **)malloc((sizeof(char *) * nc) + 1);
		pass_numbers(str, &ntable, 0);
		i = 0;
		while (ntable[i])
		{
			(*argc)++;
			i++;
		}
		return (ntable);
	}
	return (0);
}
