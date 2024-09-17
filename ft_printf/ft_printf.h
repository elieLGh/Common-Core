/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eghaziri <eghaziri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:15:17 by eghaziri          #+#    #+#             */
/*   Updated: 2024/08/04 17:21:31 by eghaziri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdarg.h>

# define LOWER_CASE_HEX "0123456789abcdef"
# define UPPER_CASE_HEX "0123456789ABCDEF"

int	ft_printf(const char *str, ...);
int	ft_formatter(const char c, va_list ap);
int	ft_putchar_pf(char c);
int	ft_putstr_pf(char *str);
int	ft_putnbr_pf(int nbr);
int	ft_puthex_pf(unsigned int n, char *base);
int	ft_putuint_pf(unsigned int n);
int	ft_putptr_pf(size_t num);

# ifndef NULL_POINTER
#  define NULL_POINTER "(nil)"
# endif

#endif