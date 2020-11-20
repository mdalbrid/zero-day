/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:40:06 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/20 19:40:54 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *nptr)
{
	int	p;
	int	z;
	int	x;

	p = 0;
	z = 1;
	x = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			z = -z;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		if (x++ >= 18 && z > 0)
			return (-1);
		if (x >= 18 && z < 0)
			return (0);
		p = p * 10 + (*nptr++ - '0');
	}
	return (p * z);
}
