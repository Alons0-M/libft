/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 12:35:49 by aarredon          #+#    #+#             */
/*   Updated: 2025/08/20 11:03:41 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    if (!s) return NULL;
    while(*s)
    {
        if(*s == (char)c)
            return (char *)s;
        s++;
    }
    if (*s == (char)c)
        return (char *)s;
    return NULL;
}