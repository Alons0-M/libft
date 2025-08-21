/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 12:39:08 by aarredon          #+#    #+#             */
/*   Updated: 2025/08/20 10:51:58 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;

    if (!s) return NULL;
    i = ft_strlen(s);
    while(i >= 0)
    {
        if (s[i] == (char)c)
            return (char *)&s[i];
        i--;
    }
    return NULL;
}