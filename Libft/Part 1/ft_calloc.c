/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eghaziri <eghaziri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 02:06:07 by eghaziri          #+#    #+#             */
/*   Updated: 2024/06/17 02:14:54 by eghaziri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void	s_zero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb && size && nmemb > (2000000000 / size))
		return (NULL);
	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	s_zero(ptr, nmemb * size);
	return (ptr);
}
