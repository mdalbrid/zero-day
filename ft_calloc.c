/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:56:32 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/23 01:03:14 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*cc;
	size_t	ds;

	ds = nmemb * size;
	cc = malloc(ds);
	if (cc == NULL)
		return (NULL);
	ft_bzero(cc, ds);
	return (cc);
}
