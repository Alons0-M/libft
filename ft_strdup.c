/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 13:14:54 by aarredon          #+#    #+#             */
/*   Updated: 2025/08/27 16:40:01 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		len;
	char	*dst;
	int		i;

	i = 0;
	len = ft_strlen(src);
	dst = (char *)malloc((len + 1) * sizeof(char));
	if (dst == NULL)
		return (0);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// #include <stdio.h>

// int main() {
//    char str[] = "lorem ipsum dolor sit amet";
//    printf("%s", ft_strdup(str));
//    printf("%s", ft_strdup("coucou"));
//    printf("%s", ft_strdup(""));
//    return (0);
// }