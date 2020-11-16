/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 12:24:28 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/16 14:22:15 by mdalbrid         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t a;
	size_t lnd;

	a = dstsize;
	lnd = ft_strlen(dst);	
	if (dst == NULL && src == NULL)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (*dst != '\0')
		dst++;
	while (*src != '\0' && lnd < dstsize--)
	{
		*dst++ = *src++;
		// dstsize -= 1;;
	}
	if (dstsize == lnd)
		dst--;
	*dst = '\0';
	return (a + ft_strlen(src));
}
