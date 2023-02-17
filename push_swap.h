/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 00:11:33 by ali               #+#    #+#             */
/*   Updated: 2023/02/17 03:57:22 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef SHOW_MOVES
#  define SHOW_MOVES 1
# endif

# include "stdarg.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct stack
{
	int						value;
	void					*next;
}							t_stack;

typedef unsigned long long	t_ull;
typedef long long			t_ll;

int							count_check(int argc);
int							character_check(int argc, char **argv);
int							size_check(int argc, char **argv);
int							clone_check(int argc, char **argv);

void						array_sa(int *a);

void						writemy(char *s);
void						stackwrite(int *a, int *b, int size);
long long					matoi(char *arg);
char						*itoam(long long n);
int							*fill_stack(int argc, char **argv);
int							*fill_empty(int argc);
int							mrintf(char *str, ...);
void						writechar(char c);
t_ull						char_counter(char *chars);
t_ll						step_counter(t_ll n);
char						*fill_chars(char c, t_ull size);

t_stack						*create_stack(int argc, char **argv);
void						listwrite(t_stack *a_stack, t_stack *b_stack);
int							get_last(t_stack **start);

void						add_first(t_stack **start, int value);
void						add_last(t_stack **start, int value);
void						del_first(t_stack **start);
void						del_last(t_stack **start);

void						list_sa(t_stack **start);
void						list_sb(t_stack **start);
void						list_ss(t_stack **a_stack, t_stack **b_stack);
void						list_pb(t_stack **a_stack, t_stack **b_stack);
void						list_pa(t_stack **a_stack, t_stack **b_stack);
void						list_ra(t_stack **start);
void						list_rb(t_stack **start);
void						list_rr(t_stack **a_stack, t_stack **b_stack);
void						list_rra(t_stack **start);
void						list_rrb(t_stack **start);
void						list_rrr(t_stack **a_stack, t_stack **b_stack);

#endif