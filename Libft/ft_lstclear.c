/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eghaziri <eghaziri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 03:39:10 by eghaziri          #+#    #+#             */
/*   Updated: 2024/06/23 03:41:27 by eghaziri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*prev;

	if (lst && *lst && del)
	{
		prev = (t_list *)*lst;
		while (prev)
		{
			tmp = prev->next;
			ft_lstdelone(prev, del);
			prev = tmp;
		}
		*lst = NULL;
	}
	*lst = NULL;
}
