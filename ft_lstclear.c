/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 18:39:05 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/27 18:41:50 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*any;

	any = *lst;
	while (any)
	{
		temp = any -> next;
		ft_lstdelone(any, del);
		any = temp;
	}
	*lst = NULL;
}
