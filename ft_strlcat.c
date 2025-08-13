/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:19:07 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/26 16:49:00 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

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
