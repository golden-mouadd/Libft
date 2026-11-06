/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouabous <mouabous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 07:22:35 by mouabous          #+#    #+#             */
/*   Updated: 2026/10/27 08:08:10 by mouabous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_check(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	size_t	i;
	size_t	l;
	size_t	end;
	size_t	start;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	end = ft_strlen(s1);
	while (s1[i] && ft_check(s1[i], set))
		i++;
	start = i;
	while (start < end && ft_check(s1[end - 1], set))
		end--;
	copy = malloc(end - start + 1);
	if (!copy)
		return (NULL);
	l = 0;
	while (start < end)
		copy[l++] = s1[start++];
	copy[l] = '\0';
	return (copy);
}
