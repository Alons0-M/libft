/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 15:24:09 by aarredon          #+#    #+#             */
/*   Updated: 2025/08/20 10:21:06 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr;

    ptr = s;
    while(n--)
    {
        if (*ptr == (unsigned char)c)
            return (void *)ptr;
        ptr++;
    }
    return NULL;
}