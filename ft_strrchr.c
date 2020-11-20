/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 21:02:04 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/20 20:15:07 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	a;
	char			*b;

	a = (unsigned char)c;
	b = (char*)s;
	while (*b)
		b++;
	while (b >= s)
	{
		if (*b == a)
			return (b);
		b--;
	}
	return (NULL);
}
