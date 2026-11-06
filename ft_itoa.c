/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouabous <mouabous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 09:27:00 by mouabous          #+#    #+#             */
/*   Updated: 2026/10/27 08:33:57 by mouabous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	long	c;
	int		len;

	c = n;
	len = 0;
	if (c <= 0)
		len++;
	while (c != 0)
	{
		c = c / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	long	nbr;
	int		n_len;
	char	*result;

	nbr = n;
	n_len = ft_intlen(n);
	result = malloc(sizeof(char) * (n_len + 1));
	if (!result)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		result[0] = '-';
		i++;
		nbr = -nbr;
	}
	result[n_len] = '\0';
	while (n_len > i)
	{
		n_len--;
		result[n_len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (result);
}
