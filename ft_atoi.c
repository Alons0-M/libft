/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:07:12 by aarredon          #+#    #+#             */
/*   Updated: 2025/08/25 17:32:05 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long atoi;
	int	i;
	int	neg;

	atoi = 0;
	if (!str)
		return (atoi);
	neg = 0;
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = 1;
		i++;
	}
	while(str[i] && ft_isdigit(str[i]))
	{
		atoi = atoi * 10 + (str[i] - '0');
		i++;
	}
	if (neg)
		atoi = -atoi;
	return ((int)atoi);
}

// #include <stdio.h>

// int main() {
// 	printf("int: %d\n", sizeof(long));
// 	char str[] = "-1";
//     // printf("%d\n", ft_atoi(str));
// 	// printf("%d\n", ft_atoi("1"));
// 	// printf("%d\n", ft_atoi("\t\r+1"));
// 	// printf("%d\n", ft_atoi("+42as3"));
// 	// printf("%d\n", ft_atoi("101"));
// 	printf("%d\n", ft_atoi("-2147483648"));
// 	printf("%d\n", ft_atoi("2147483648"));
//     return (0);
// }