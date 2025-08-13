/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 13:39:10 by aarredon          #+#    #+#             */
/*   Updated: 2025/08/08 02:10:00 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (!dest || !src)
		return 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

// #include <stdio.h>

// int main(void)
// {
//     char src[] = "Hello";
//     char dest[10];
//     unsigned int n = 8;

//     printf("Test 1:\n");
//     printf("src = \"%s\", dest = \"%s\"\n", src, dest);
//     ft_strlcpy(dest, src, n);
//     printf("src = \"%s\", dest = \"%s\"\n", src, dest);

//     char src2[] = "World";
//     char dest2[10] = "XXXXXXXXX";
//     printf("\nTest 2:\n");
//     printf("src = \"%s\", dest = \"%s\"\n", src2, dest2);
//     ft_strlcpy(dest2, src2, n);
//     printf("rc = \"%s\", dest = \"%s\"\n", src2, dest2);

//     char src3[] = "Programming";
//     char dest3[10] = "XXXXXXXXX";
//     unsigned int n3 = 5;
//     printf("\nTest 3:\n");
//     printf("src = \"%s\", dest = \"%s\"\n", src3, dest3);
//     ft_strlcpy(dest3, src3, n3);
//     printf("src = \"%s\", dest = \"%s\"\n", src3, dest3);

//     printf("\nTest 4:\n");
//     char *result = ft_strlcpy(NULL, src, n);
//     printf("NULL: %s\n", result ? "OK" : "NULL");

//     return (0);
// }
