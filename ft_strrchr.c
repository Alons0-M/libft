/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 12:39:08 by aarredon          #+#    #+#             */
/*   Updated: 2025/08/17 15:21:08 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;

    if (!s) return NULL;
    i = ft_strlen(s);
    while(i >= 0 && s[i] != (char)c)
    {
        i--;
    }
    if (i == -1)
        return NULL;
    else
        return &((char *)s)[i];
}