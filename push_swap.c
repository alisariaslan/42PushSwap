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

	if (!count_check(argc) || !character_check(argc, argv) || !size_check(argc,
			argv))
		return (0);
	a = fill_stack(argc, argv);
	b = fill_empty(argc);
	stackwrite(a, b, argc, 1);
	return (0);
}
