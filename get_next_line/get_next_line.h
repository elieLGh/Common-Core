/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eghaziri <eghaziri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 18:22:12 by eghaziri          #+#    #+#             */
/*   Updated: 2024/08/04 19:25:57 by eghaziri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

size_t	ft_strlen(const char*str);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *str);
char	*ft_substr(char const *c, unsigned int start, size_t len);
char	*ft_strjoin(const char *dest, const char *src);
char	*get_next_line(int fd);
char	*fill_line_buffer(int fd, char *left_sub, char *buffer);
char	*set_line(char *line_buffer);

#endif