/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eghaziri <eghaziri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:25:04 by eghaziri          #+#    #+#             */
/*   Updated: 2024/08/04 17:48:40 by eghaziri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_pf(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr_pf(char *str)
{
	int	i;

	if (!str)
		return (ft_putstr_pf("(null)"));
	i = 0;
	while (str[i])
	{
		ft_putchar_pf(str[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr_pf(int nbr)
{
	int	n;
	int	len;

	n = nbr;
	len = 0;
	if (n == -2147483648)
	{
		len = ft_putstr_pf("-2147483648");
		return (len);
	}
	if (n < 0)
	{
		len = ft_putchar_pf('-');
		n = -n;
	}
	if (n >= 10)
		len += ft_putnbr_pf(n / 10);
	len += ft_putchar_pf((n % 10) + '0');
	return (len);
}
