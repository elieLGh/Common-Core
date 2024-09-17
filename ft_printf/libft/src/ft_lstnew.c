/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eghaziri <eghaziri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 03:00:40 by eghaziri          #+#    #+#             */
/*   Updated: 2024/06/23 03:05:56 by eghaziri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst_ptr;

	lst_ptr = (t_list *)malloc(sizeof(t_list));
	if (!lst_ptr)
		return (NULL);
	lst_ptr->content = content;
	lst_ptr->next = NULL;
	return (lst_ptr);
}
