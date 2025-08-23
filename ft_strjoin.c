/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 21:16:59 by aarredon          #+#    #+#             */
/*   Updated: 2025/08/24 00:14:56 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len1;
	int		len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	ft_strlcpy(str, s1, len1 + 1);
	ft_strlcpy(&str[len1], s2, len2 + 1);
	return (str);
}

// //#include <string.h>
// int main()
// {
//     char s1[] = "Holaadios";
//     //char str[20] = {0};
//     printf("%s\n", ft_strjoin(s1, "rrrr"));
//     //strlcpy(str, "hola", 4);
//     //printf("%s\n", str);
// }