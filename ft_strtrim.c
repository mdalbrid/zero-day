/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:20:01 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/24 16:26:51 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		start(char const *s1, char const *set)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (set[b])
	{
		if (s1[a] == set[b])
		{
			a++;
			b = -1;
		}
		b++;
	}
	return (a);
}

int		end(char const *s1, char const *set)
{
	int a;
	int b;

	a = ft_strlen(s1) - 1;
	b = 0;
	while (set[b])
	{
		if (s1[a] == set[b])
		{
			a--;
			b = -1;
		}
		b++;
	}
	return (a);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*r;
	size_t	len;

	if (s1 == NULL)
		return (NULL);
	len = end(s1, set) - start(s1, set);
	r = ft_substr(s1, start(s1, set), len + 1);
	return (r);
}
