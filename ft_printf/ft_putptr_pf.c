/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eghaziri <eghaziri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:09:11 by eghaziri          #+#    #+#             */
/*   Updated: 2024/08/04 17:20:07 by eghaziri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_ulong(unsigned long num, char *base)
{
	int	len;

	len = 0;
	if (num >= 16)
		len += ft_puthex_ulong(num / 16, base);
	len += ft_putchar_pf(base[num % 16]);
	return (len);
}

int	ft_putptr_pf(size_t num)
{
	int	len;

	len = 0;
	if (!num)
	{
		len += ft_putstr_pf(NULL_POINTER);
		return (len);
	}
	len = ft_putstr_pf("0x");
	len += ft_puthex_ulong(num, LOWER_CASE_HEX);
	return (len);
}
