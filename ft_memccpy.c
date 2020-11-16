/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 04:16:59 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/13 10:03:23 by mdalbrid         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void        *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char   *a;
    unsigned char   *b;
    unsigned char   d;
    
    a = (unsigned char*)dest;
    b = (unsigned char*)src;
    d = (unsigned char)c;
    if (dest == NULL && src == NULL)
        return (NULL);
    while (n--)
    {
        *a++ = *b;
        if (*b == d)
            return (a);
        b++;
    }
    return (0);
}