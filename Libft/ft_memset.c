/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eghaziri <eghaziri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:17:07 by eghaziri          #+#    #+#             */
/*   Updated: 2024/06/17 16:29:24 by eghaziri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	void	*s_ptr;

	s_ptr = s;
	while (n > 0)
	{
		*(unsigned char *)s_ptr = (unsigned char)c;
		s_ptr++;
		n--;
	}
	return (s);
}
