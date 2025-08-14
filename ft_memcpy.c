/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 00:51:39 by aarredon          #+#    #+#             */
/*   Updated: 2025/08/15 01:00:21 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" //"../libft.h"

void *memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    d = dest;
    s = src;
    while(n--)
    {
        *d++ = *s++;
    }
    return dest;
}