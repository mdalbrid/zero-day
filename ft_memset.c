/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 20:06:46 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/20 20:07:12 by mdalbrid         ###   ########.fr       */
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
