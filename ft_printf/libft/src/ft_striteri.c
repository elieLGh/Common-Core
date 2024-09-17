/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eghaziri <eghaziri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 02:49:06 by eghaziri          #+#    #+#             */
/*   Updated: 2024/06/23 04:27:25 by eghaziri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_striteri(char *s, void (*f)(unsigned int, char *s))
{
	unsigned int	i;

	i = 0;
	if (f && s)
	{
		while (*s)
		{
			f(i, s);
			s++;
			i++;
		}
	}
	return (NULL);
}
