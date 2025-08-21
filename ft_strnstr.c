/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 00:52:09 by aarredon          #+#    #+#             */
/*   Updated: 2025/08/21 18:08:05 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int start_with(const char *haystack, const char *needle, size_t n)
{
    size_t j;
    
    j = 0;
    while(j < n && haystack[j] == needle[j])
    {
        if(needle[++j] == '\0')
            return 1;
    }
    return 0;
}

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t i;

    if (!haystack) return NULL;
    if (!needle || *needle == '\0') return (char *)haystack;
    i = 0;
    while(i < n && haystack[i])
    {
        if(start_with(&haystack[i], needle, n - i))
            return (char *)&haystack[i];   
        i++;
    }
    return NULL;
}

// int main(int argc, char **argv) {
//     char *needle = "aabc";
//     if (argc > 1)
//         needle = argv[1];

// 	char haystack[30] = "aaabcabcd";

//     char *res = ft_strnstr(haystack, needle, -1);
//     printf("llega\n");
//     if (!res) printf("NULO\n");
//     else printf("%s\n", res);
// }
