/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lbx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduval <tduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 10:48:07 by tduval            #+#    #+#             */
/*   Updated: 2018/11/30 23:17:30 by tduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int		print_lbx(va_list ap, t_flags elem)
{
	unsigned long	n;
	unsigned long	cp;
	int				i;

	i = 1;
	n = va_arg(ap, unsigned long);
	cp = n;
	if (ft_strchr(elem.options, '#') && (elem.width > 1 || n))
		if (elem.accuracy || n || (elem.width > 1 && !n))
			i += 2;
	if (ft_strchr(elem.options, '#') && !n && elem.width < 1 &&
			elem.accuracy == -1)
		return ((int)write(1, "0", 1));
	while (cp > 15)
	{
		cp /= 16;
		i++;
	}
	return (n == 0 && elem.accuracy == 0 ?
	padding_bx((unsigned long long)n, 0, elem) : i +
	padding_bx((unsigned long long)n, i, elem));
}
