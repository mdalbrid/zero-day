/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 18:31:54 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/27 18:35:32 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *ab;

	ab = *lst;
	if (lst && *lst)
	{
		while (ab -> next != NULL)
			ab = ab -> next;
		ab -> next = new;
	}
	else if (lst)
		*lst = new;
}
