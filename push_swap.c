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

int	main(int argc, char **argv)
{
	int	*a;
	int	*b;
	int	show_moves;

	show_moves = 0;
	if (!count_check(argc) || !character_check(argc, argv) || !size_check(argc,
			argv))
		return (0);
	a = fill_stack(argc, argv);
	b = fill_empty(argc);
	stackwrite(a, b, argc, 1);
	sa(a, show_moves);
	stackwrite(a, b, argc, 2);
	return (0);
}
