/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:19:07 by aarredon          #+#    #+#             */
/*   Updated: 2025/08/20 01:11:57 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t dest_size;
	size_t	src_size;

	dest_size = 0;
	while (dest[dest_size] && dest_size < size)
	{
		dest_size++;
	}
	src_size = 0;
	while (src[src_size])
	{
		src_size++;
	}
	if (dest_size >= size)
		return (size + src_size);
	i = 0;
	while (src[i] && dest_size + i < size - 1)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}
