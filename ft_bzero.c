/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:43:24 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/20 19:44:46 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void		ft_bzero(void *s, size_t n)
{
	unsigned char *y;

	y = (unsigned char*)s;
	while (n-- != 0)
		y[n] = 0;
}
