/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:52:47 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/06 22:13:44 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t p;

	p = 0;
	if (dst == NULL && src == NULL)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (*src != 0 && p < dstsize - 1)
		{
			*dst++ = *src++;
			p++;
		}
	*dst = '\0';
	return (ft_strlen(src) + p);
}
