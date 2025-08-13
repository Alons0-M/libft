/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:07:12 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/25 12:55:19 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
	int atoi;
	int neg;

	atoi = 0;
	neg = 0;
	while (*str != '\0' && atoi == 0)
	{
		if (*str == '-')
			neg++;
		while (*str && *str >= '0' && *str <= '9')
		{
			atoi = atoi * 10 + (*str - '0');
        	str++;
		}
		str++;
	}
	if (neg % 2 == 1)
		atoi *= -1;
	return atoi;
}

// #include <stdio.h>

// int main() {
//     char str[] = "--++-+--5345as4d-+3";
//     printf("%d", ft_atoi(str));
//     return 0;
// }