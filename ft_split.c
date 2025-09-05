/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 01:37:47 by aarredon          #+#    #+#             */
/*   Updated: 2025/09/05 02:58:11 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numofwords(char const *s, char c)
{
	int	word_count;
	int	i;

	word_count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && (i > 0 && s[i - 1] != c))
			word_count++;
		i++;
	}
	if (i > 0 && s[i - 1] != c)
		word_count++;
	return (word_count);
}

static int	strlenchr(char const *s, char end)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != end)
	{
		len++;
	}
	return (len);
}

static int	allocword(char **result, int j, int len)
{
	int	i;

	result[j] = (char *)malloc((len + 1) * sizeof(char));
	if (!result[j])
	{
		i = 0;
		while (i < j)
		{
			free(result[i]);
			i++;
		}
		free(result);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		j;
	int		word_count;
	int		len;

	if (!s)
		return (NULL);
	word_count = numofwords(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	j = -1;
	while (++j < word_count)
	{
		while (*s == c)
			s++;
		len = strlenchr(s, c);
		if (!allocword(result, j, len))
			return (NULL);
		ft_strlcpy(result[j], s, len + 1);
		s += len + 1;
	}
	result[j] = NULL;
	return (result);
}
