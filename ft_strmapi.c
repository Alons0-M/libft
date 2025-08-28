/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 02:21:54 by aarredon          #+#    #+#             */
/*   Updated: 2025/08/28 14:13:24 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Applies the function ’f’ to each character of the
 * string ’s’ to create a new string (with malloc(3))
 * resulting from successive applications of ’f’.
 *
 * @param p1 The string on which to iterate.
 * @param p2 The function to apply to each character.
 * @return The string created from the successive applications
 * of ’f’. Returns NULL if the allocation fails.
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
