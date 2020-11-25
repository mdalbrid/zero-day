/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 10:46:24 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/25 17:26:10 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*newstr;
	size_t	ls;

	ls = ft_strlen(s);
	newstr = (char*)malloc(ls + 1);
	if (newstr == NULL)
		return (NULL);
	ft_strlcpy(newstr, s, ls + 1);
	return (newstr);
}
