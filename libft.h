/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 00:06:23 by aarredon          #+#    #+#             */
/*   Updated: 2025/08/15 01:07:27 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t		ft_strlen(const char *s);
void *ft_memset(void *s, int c, size_t n);
void bzero(void *s, size_t n);
void *memcpy(void *dest, const void *src, size_t n);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);


#endif