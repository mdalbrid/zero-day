/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 18:00:45 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/25 17:17:51 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*st;
	size_t	p;

	p = 0;
	if (s == NULL)
		return (NULL);
	st = malloc(ft_strlen(s) + 1);
	if (st == NULL)
		return (NULL);
	while (s[p])
	{
		st[p] = f(p, s[p]);
		p++;
	}
	st[p] = '\0';
	return (st);
}
