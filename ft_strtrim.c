/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 23:58:01 by aarredon          #+#    #+#             */
/*   Updated: 2025/08/24 00:15:16 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	return (NULL);
}

// int main()
// {
//     char s1[] = " zxcxcz"; //zxcasdxcz
//     printf("%s", ft_strtrim(s1, "cxz"));
// }