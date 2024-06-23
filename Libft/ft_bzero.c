/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eghaziri <eghaziri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:07:56 by eghaziri          #+#    #+#             */
/*   Updated: 2024/06/16 21:09:24 by eghaziri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s_ptr;

	s_ptr = (unsigned char *)s;
	while (n-- > 0)
	{
		*s_ptr = '\0';
		s_ptr++;
	}
}
