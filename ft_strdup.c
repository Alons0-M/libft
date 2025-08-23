/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 13:14:54 by aarredon          #+#    #+#             */
/*   Updated: 2025/08/24 00:15:46 by aarredon         ###   ########.fr       */
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
	dst[i] = '\n';
	return (dst);
}

// #include <stdio.h>

// int main() {
//    char str[] = "--++-+--5345as4d-+3";
//    printf("%s", ft_strdup(str));
//    return (0);
// }