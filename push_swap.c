/* ************************************************************************** */
/**/
/*:::  ::::::::   */
/*   push_swap.c:+:  :+::+:   */
/*+:+ +:+ +:+ */
/*   By: ali <ali@student.42.fr>+#+  +:+   +#+*/
/*+#+#+#+#+#+   +#+   */
/*   Created: 2023/02/10 21:16:29 by ali   #+##+# */
/*   Updated: 2023/02/13 22:44:17 by ali  ###   ########.fr   */
/**/
/* ************************************************************************** */

#include "push_swap.h"

/*
int	main(int argc, char **argv)
{
	int	*a;
	int	*b;

	if (!count_check(argc) || !character_check(argc, argv) || !size_check(argc,
			argv) || !clone_check(argc, argv))
		return (0);
	a = fill_stack(argc, argv);
	b = fill_empty(argc);
	stackwrite(a, b, argc);
	sa(a);
	stackwrite(a, b, argc);
	return (0);
}
*/

int	main(int argc, char **argv)
{
	t_stack	*a_stack;
	t_stack	*b_stack;

	if (!count_check(argc) || !character_check(argc, argv) || !size_check(argc,
			argv) || !clone_check(argc, argv))
		return (0);
	a_stack = create_stack(argc, argv);
	listwrite(a_stack, b_stack);
}
