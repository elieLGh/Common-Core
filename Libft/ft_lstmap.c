/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eghaziri <eghaziri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 03:43:34 by eghaziri          #+#    #+#             */
/*   Updated: 2024/06/23 04:03:09 by eghaziri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;

	if (!lst || !f)
		rturn (NULL);
	new_element = ft_lstnew(f(lst->content));
	if (!new_element)
		return (NULL);
	new_list = new_element;
	lst = lst->next;
	while (lst)
	{
		new_element = ft_lstnew(f(lst->content));
		if (!new_element)
		{
			ft_lstclear(&new_list, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&new_list, new_element);
	}
	return (new_list);
}
