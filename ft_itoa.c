/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 18:33:24 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/25 17:46:07 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		dlina(int n)
{
	int		dl;

	dl = 0;
	if (n < 0)
		dl++;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		dl++;
	}
	return (dl);
}

char	*ft_itoa(int n)
{
	char	*st;
	int		p;
	int		len;

	p = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = dlina(n);
	st = malloc(len + 1);
	if (st == NULL)
		return (NULL);
	if (n < 0)
	{
		st[p++] = '-';
		n = -n;
	}
	st[len] = '\0';
	while (len > p)
	{
		st[--len] = n % 10 + 48;
		n /= 10;
	}
	return (st);
}
