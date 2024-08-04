/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eghaziri <eghaziri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:01:26 by eghaziri          #+#    #+#             */
/*   Updated: 2024/08/04 17:33:37 by eghaziri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lenuint(unsigned int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

int	ft_putuint_pf(unsigned int n)
{
	unsigned int	num;

	num = n;
	if (num > 9)
		ft_putuint_pf(num / 10);
	ft_putchar_pf((num % 10) + '0');
	return (ft_lenuint(n));
}
