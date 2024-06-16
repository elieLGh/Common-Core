/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eghaziri <eghaziri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:17:07 by eghaziri          #+#    #+#             */
/*   Updated: 2024/06/16 20:20:32 by eghaziri         ###   ########.fr       */
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

'
void	*ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((usnigned char *)s)[i] = (usnigned char)c;
	}
	return (s);
}
'
