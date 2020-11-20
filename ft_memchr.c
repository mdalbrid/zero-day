/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 07:36:26 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/20 20:01:34 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	d;

	a = (unsigned char*)s;
	d = (unsigned char)c;
	while (n--)
	{
		if (*a == d)
			return (a);
		a++;
	}
	return (0);
}
