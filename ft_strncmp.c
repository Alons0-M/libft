/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 12:56:54 by aarredon          #+#    #+#             */
/*   Updated: 2025/08/17 15:21:14 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while(i < n && s1[i] && s1[i] == s2[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

// int main(void)
// {
//     char *c1 = "Hol";
//     char *c2 = "Hola";

//     printf("%d\n", ft_strncmp(c1, c2, 5));
// }