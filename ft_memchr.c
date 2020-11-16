/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 07:36:26 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/15 13:50:01 by mdalbrid         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void        *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *a;
    unsigned char   d;

    a = (unsigned char*)s;
    d = (unsigned char)c;
    while (n--)
    {
        if (*a == d)
            return (a);
        a++;
    }
    return (0);
}
