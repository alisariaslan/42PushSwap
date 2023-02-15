/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 00:11:33 by ali               #+#    #+#             */
/*   Updated: 2023/02/15 23:32:03 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "stdarg.h"
# include <stdlib.h>
# include <unistd.h>

typedef unsigned long long	t_ull;
typedef long long			t_ll;

int							count_check(int argc);
int							character_check(int argc, char **argv);
int							size_check(int argc, char **argv);

void						sa(int *a, int show_moves);
void						writemy(char *s);
void						stackwrite(int *a, int *b, int size, int count);
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