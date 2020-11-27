/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalbrid <mdalbrid@student.21>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 17:48:12 by mdalbrid          #+#    #+#             */
/*   Updated: 2020/11/27 18:23:01 by mdalbrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *list;

	if(!(list = malloc(sizeof(t_list))))
		return (NULL);
	list -> content = content;
	list -> next = NULL;
	return (list);
}
