/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 21:01:56 by aarredon          #+#    #+#             */
/*   Updated: 2025/08/22 01:44:15 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;

    if (!s || start >= strlen(s))
        return NULL;
    str = (char *)malloc((len+1) * sizeof(char));
    if (str)
    {
        ft_strlcpy(str, &s[start], len+1);
        return str;
    }
    return NULL;
}

int main()
{
    char s1[] = "Holaadios";
    printf("%s", ft_substr(s1, 4, 5));
}