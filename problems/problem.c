/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   problem.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:16:29 by ali               #+#    #+#             */
/*   Updated: 2023/02/18 22:19:28 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct stack
{
	int						value;
	struct stack			*next;
}							t_stack;

typedef unsigned long long	t_ull;
typedef long long			t_ll;

static t_ull	char_counter(char *chars)
{
	t_ull	i;

	i = 0;
	while (chars[i])
	{
		i++;
	}
	return (i);
}

static t_ll	step_counter(t_ll n)
{
	t_ll	steps;

	steps = 1;
	if (n < 0)
		n *= -1;
	while (n >= 10)
	{
		n /= 10;
		steps++;
	}
	return (steps);
}

static char	*getspaces(int val, char *spaces)
{
	t_ull	count;
	int		steps;
	int		total;
	int		i;

	count = char_counter(spaces);
	if (val < 0)
		val *= -10;
	steps = step_counter(val);
	total = count - steps;
	i = 0;
	while (i < total)
	{
		spaces[i] = '.';
		i++;
	}
	spaces[i] = 0;
	return (spaces);
}

static char	*fill_chars(char c, t_ull size)
{
	t_ull	i;
	char	*filled;

	i = 0;
	filled = malloc(sizeof(char) * size + 1);
	while (i < size)
	{
		filled[i] = c;
		i++;
	}
	filled[size - 1] = 0;
	return (filled);
}

static void	write_iterate_stack(t_stack *start)
{
	char	*spaces;
	char	*getspaces_;

	while (start)
	{
		spaces = fill_chars('.', 12);
		getspaces_ = getspaces(start->value, spaces);
		spaces = 0;
		free(spaces);
		printf("%d%s |\n", start->value, getspaces_);
		free(getspaces_);
		if (start->next)
			start = start->next;
		else
			break ;
	}
}

static void	listwrite(t_stack *a_stack, t_stack *b_stack)
{
	static t_ull	count;

	count = 1;
	printf("\t\t-> %lld\n", count++);
	printf("____________\n");
	if (a_stack)
		write_iterate_stack(a_stack);
	printf("____________|\n");
	printf("(a)\n");
	printf("____________\n");
	if (b_stack)
		write_iterate_stack(b_stack);
	printf("____________|\n");
	printf("(b)\n\n");
}

static void	clear_stack(t_stack **stack)
{
	t_stack	*prev;

	while (*stack)
	{
		prev = ((*stack));
		if ((*stack)->next)
			(*stack) = (*stack)->next;
		else
			*stack = 0;
		free(prev);
	}
}

static t_stack	*add_stack(void)
{
	t_stack	*new_empty_stack;

	new_empty_stack = (t_stack *)malloc(sizeof(t_stack));
	return (new_empty_stack);
}

static t_stack	*create_stack(int argc, char **argv)
{
	int		i;
	t_stack	*stack_list;
	t_stack	*stack_start;

	stack_list = (t_stack *)malloc(sizeof(t_stack));
	stack_start = stack_list;
	i = 1;
	while (argv[i])
	{
		stack_list->value = atoi(argv[i]);
		i++;
		if (i < argc)
		{
			stack_list->next = add_stack();
			stack_list = stack_list->next;
		}
	}
	stack_list->next = 0;
	return (stack_start);
}

int	main(int argc, char **argv)
{
	t_stack	*a_stack;
	t_stack	*b_stack;
	a_stack = create_stack(argc, argv);
	listwrite(a_stack, b_stack);
	listwrite(a_stack, b_stack);
	clear_stack(&a_stack);
}
*/

/*
VALGRIND LEAK TEST (COPY PASTE)
gcc -g -O1 problem && valgrind --leak-check=yes --track-origins=yes --log-file=valgrind.rpt --track-origins=yes ./a.out 3 2 1 0 -1 -2 -3 && cat valgrind.rpt
*/
