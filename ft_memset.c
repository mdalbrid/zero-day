/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbid@student.21-school>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 00:25:23 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/10 01:50:09 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void		*ft_memset(void *b, int c, size_t len)
{
	unsigned char *y;

	y = (unsigned char*)b;
	while (len-- != 0)
		y[len] = (unsigned char)c;
	return (b);
}
