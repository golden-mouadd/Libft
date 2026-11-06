/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouabous <mouabous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 09:25:25 by mouabous          #+#    #+#             */
/*   Updated: 2026/10/27 08:07:31 by mouabous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static int	ft_word_len(char const *s, int i, char c)
{
	int	n;

	n = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		n++;
	}
	return (n);
}

static char	*ft_alloc_word(char const *s, int *i, char c)
{
	int		len;
	int		k;
	char	*word;

	len = ft_word_len(s, *i, c);
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	k = 0;
	while (s[*i] && s[*i] != c)
	{
		word[k] = s[*i];
		(*i)++;
		k++;
	}
	word[k] = '\0';
	return (word);
}

static char	**ft_free_all(char **copy, int j)
{
	while (j > 0)
	{
		j--;
		free(copy[j]);
	}
	free(copy);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**copy;

	if (!s)
		return (NULL);
	copy = malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!copy)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] == '\0')
			break ;
		copy[j] = ft_alloc_word(s, &i, c);
		if (!copy[j])
			return (ft_free_all(copy, j));
		j++;
	}
	copy[j] = NULL;
	return (copy);
}

// int     main(void)
// {
//     int i = 0;
//     char **ptr  ;
//     ptr = ft_split("negger------asf ",'-');
//     while(ptr[i])
//     {
//     printf("%s", ptr[i]);

//     i++;
//     }
//     free(ptr);
// }