/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:07:12 by aarredon          #+#    #+#             */
/*   Updated: 2025/08/24 00:12:29 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	atoi;
	int	neg;

	atoi = 0;
	if (str)
	{
		neg = 0;
		while (*str && atoi == 0)
		{
			if (*str == '-')
				neg++;
			while (*str && ft_isdigit(*str))
			{
				atoi = atoi * 10 + (*str - '0');
				str++;
			}
			str++;
		}
		if (neg % 2 == 1)
			atoi *= -1;
	}
	return (atoi);
}

// #include <stdio.h>

// int main() {
//     char str[] = "--++-+--5345as4d-+3";//"-";
//     printf("%d", ft_atoi(str));
//     return (0);
// }