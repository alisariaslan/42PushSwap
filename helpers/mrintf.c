/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mrintf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:40:23 by ali               #+#    #+#             */
/*   Updated: 2023/02/14 00:45:20 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	print_s(char *s)
{
	int	charcount;

	charcount = char_counter(s);
	writemy(s);
	return (charcount);
}

static int	print_d(int n)
{
	char	*num;

	num = itoam(n);
	return (write(1, num, char_counter(num)));
}

static int	print_type(va_list args, char format, int *i)
{
	int	len;

	len = 0;
	*i += +1;
	if (format == 'd')
		len += print_d(va_arg(args, int));
	else if (format == 's')
		len += print_s(va_arg(args, char *));
	return (len);
}

int	mrintf(char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] == 'd')
			len += print_type(args, 'd', &i);
		else if (str[i] == '%' && str[i + 1] == 's')
			len += print_type(args, 's', &i);
		else
		{
			writechar(str[i]);
			len++;
		}
		i++;
	}
	return (len);
}
