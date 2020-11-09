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

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int p;

	p = 0;
	if (dstsize != 0)
	{
		while (src[p] != '\0')
		{
			dst[p] = src[p];
			p++;
		}
	}
	return (*dst);
}
