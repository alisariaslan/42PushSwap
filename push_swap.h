/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 00:11:33 by ali               #+#    #+#             */
/*   Updated: 2023/02/16 13:41:00 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef SHOW_MOVES
#  define SHOW_MOVES 0
# endif

# include "stdarg.h"
# include <stdlib.h>
# include <unistd.h>

typedef unsigned long long	t_ull;
typedef long long			t_ll;

int							count_check(int argc);
int							character_check(int argc, char **argv);
int							size_check(int argc, char **argv);
int							clone_check(int argc, char **argv);

void						sa(int *a);
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

#endif