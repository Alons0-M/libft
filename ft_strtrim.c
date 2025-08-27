/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 23:58:01 by aarredon          #+#    #+#             */
/*   Updated: 2025/08/27 16:44:55 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strtrim: Allocates (with malloc(3)) and returns a copy of
 * ’s1’ with the characters specified in ’set’ removed
 * from the beginning and the end of the string.
 *
 * @param p1 The string to be trimmed.
 * @param p2 The reference set of characters to trim.
 * @return The trimmed string. NULL if the allocation fails.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		i;
	char	*str;

	i = 0;
	len = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		i++;
	}
	if (i < len)
	{
		while (len > i && ft_strchr(set, s1[len]))
		{
			len--;
		}
		str = (char *)malloc((len - i + 2) * sizeof(char));
		ft_strlcpy(str, &s1[i], (len - i + 2));
		return (str);
	}
	return (ft_strdup(""));
}

// int main()
// {
//     char s1[] = " zxcsdaxcz"; //zxcasdxcz
//     printf("%s", ft_strtrim(s1, " cxz"));
// }
//&& s1[i] != ' '