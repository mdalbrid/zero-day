/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 01:58:14 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/10 04:06:13 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*a;
	unsigned char		*b;

	a = (unsigned char*)dst;
	b = (unsigned char*)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n-- != 0)
		*a++ = *b++;
	return (dst);
}
