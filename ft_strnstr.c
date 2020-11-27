/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:27:03 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/27 03:05:17 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ll;

	ll = ft_strlen(little);
	if (*little == 0)
		return ((char*)big);
	if (*big == 0)
		return (NULL);
	while (*big && len-- >= ll)
	{
		if (ft_strncmp(big, little, ll) == 0)
			return ((char*)big);
		big++;
	}
	return (NULL);
}
