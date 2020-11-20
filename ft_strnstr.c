/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:27:03 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/20 20:14:39 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;
	size_t	ll;

	b = (char*)big;
	l = (char*)little;
	ll = ft_strlen(little);
	if (*l == 0 || l == b)
		return (b);
	if (*b == 0)
		return (NULL);
	while (len-- && len > ll)
	{
		if (*b == *l)
		{
			if (ft_memcmp(b, l, ll) == 0)
				return (b);
		}
		b++;
	}
	return (NULL);
}
