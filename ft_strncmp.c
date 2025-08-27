/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 12:56:54 by aarredon          #+#    #+#             */
/*   Updated: 2025/08/27 16:09:14 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!n)
		return (0);
	i = 0;
	while (i < n - 1 && s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main(void)
// {
//     char *c1 = "abcds";
//     char *c2 = "abcdf";

//     printf("%d\n", ft_strncmp(c1, c2, 4));
//     printf("%d\n", strncmp(c1, c2, 4));
// 	printf("%d\n", ft_strncmp("abc", "abc", 7));
// }