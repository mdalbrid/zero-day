/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 05:46:38 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/10 07:41:30 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(const char *str)
{
	int	p;

	p = 0;
	while (*str++)
	{
		while (*str >= 9 && *str <= 13)
			str++;
		if (*str++ == '-')
			ft_atoi(-str);
		while (*str >= '0' && *str <= '9')
		{
			p *= 10;
			p += *str++;
			p -= '0';
		}
	}
	return (p);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *a = "  -++--12kahfiu";
	char *v = "-2147483650";
	char *b = "   	-2147483649";
	printf("%d \n", ft_atoi(b));
	printf("%d \n", atoi(b));
	return (0);
}
