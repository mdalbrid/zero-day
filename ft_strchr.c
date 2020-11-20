/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 20:59:44 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/20 20:08:26 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	a;
	char			*b;

	a = (unsigned char)c;
	b = (char*)s;
	while (*b)
	{
		if (*b == a)
			return (b);
		b++;
	}
	if (a == 0)
		return (b);
	return (NULL);
}
