/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 21:01:56 by aarredon          #+#    #+#             */
/*   Updated: 2025/08/27 17:04:51 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	strlen;

	strlen = ft_strlen(s);
	if (!s || start >= strlen)
		return (ft_strdup(""));
	if (len > strlen - start)
		len = strlen - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str)
	{
		ft_strlcpy(str, &s[start], len + 1);
		return (str);
	}
	return (ft_strdup(""));
}

// int	main(void)
// {
// 	char s1[] = "0123456789";
// 	printf("%s", ft_substr(s1, 9, 10));
// }