/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 20:10:52 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/22 12:05:58 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	p;

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
