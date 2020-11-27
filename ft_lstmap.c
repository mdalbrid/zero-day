/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 18:43:38 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/27 18:53:17 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*nelem;

	if (!lst || !f)
		return (NULL);
	if (!(nelem = ft_lstnew(f(lst -> content))))
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	nlst = nelem;
	lst = lst->next;
	while (lst)
	{
		if (!(nelem = ft_lstnew(f(lst -> content))))
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&nlst, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&nlst, nelem);
	}
	return (nlst);
}
