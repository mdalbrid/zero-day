/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 03:35:31 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/10 05:14:05 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*a;
	unsigned char			*b;

	a = (unsigned char*)dst;
	b = (unsigned char*)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (src >= dst)
	{
		while (len--)
			*a++ = *b++;
		return (dst);
	}
	while (len--)
		a[len] = b[len];
	return (dst);
}
