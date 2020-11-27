/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 21:02:00 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/26 06:19:19 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_length(char *s, char c)
{
	int		len;
	char	*a;

	len = 0;
	while (*s)
	{
		a = s + 1;
		if (len == 0 && *s != c)
			len++;
		if (*s++ == c && *a != c && *a != '\0')
			len++;
	}
	return (len);
}

void	ft_item(char **array, char const *s, char c, int num)
{
	int		len;
	int		p;
	int		start;
	int		i;

	start = 0;
	i = 0;
	p = 0;
	while (i < num)
	{
		while (s[p] == c && s[p])
			p++;
		if (p == 0 || ((s[p] != c) && (s[p - 1] == c || s[p - 1] == '\0')))
			start = p;
		if (s[p + 1] == c || s[p + 1] == '\0')
		{
			len = p - start;
			array[i] = ft_substr(s, p - len, len + 1);
			if (array[i++] == NULL)
				free(array);
		}
		p++;
	}
	array[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		num;

	if (s == NULL)
		return (NULL);
	num = ft_length((char*)s, c);
	array = malloc(sizeof(char*) * (num + 1));
	if (array == NULL)
		return (NULL);
	ft_item(array, s, c, num);
	return (array);
}
