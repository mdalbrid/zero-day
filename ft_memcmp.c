/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 08:31:50 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/13 09:54:04 by mdalbrid         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *a;
    unsigned char *b;

    a = (unsigned char*)s1;
    b = (unsigned char*)s2;
    if (n == 0)
        return (0);
    while (*a == *b && --n)
        {
            a++;
            b++;
        }
    return (unsigned int)*a - (unsigned int)*b;
}
