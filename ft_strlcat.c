/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 12:24:28 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/20 20:09:09 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t a;
	size_t lnd;
	size_t lns;

	a = 0;
	lnd = ft_strlen(dst);
	lns = ft_strlen(src);
	if (dst == NULL && src == NULL)
		return (0);
	if (lnd >= dstsize)
		return (ft_strlen(src) + dstsize);
	while (*dst != '\0')
		dst++;
	while (*src != '\0' && a + lnd < dstsize - 1)
	{
		*dst++ = *src++;
		a++;
	}
	*dst = '\0';
	return (lnd + lns);
}
