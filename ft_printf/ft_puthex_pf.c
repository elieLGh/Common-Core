/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eghaziri <eghaziri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:52:07 by eghaziri          #+#    #+#             */
/*   Updated: 2024/08/04 17:03:31 by eghaziri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lenhex(unsigned int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		len++;
		num /= 16;
	}
	return (len);
}

int	ft_puthex_pf(unsigned int n, char *base)
{
	unsigned int	num;

	num = n;
	if (num >= 16)
		ft_puthex_pf(num / 16, base);
	ft_putchar_pf(base[num % 16]);
	return (ft_lenhex(n));
}
