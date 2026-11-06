/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouabous <mouabous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:25:59 by mouabous          #+#    #+#             */
/*   Updated: 2026/10/27 08:07:05 by mouabous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;
	unsigned char		g;

	str = (const unsigned char *)s;
	g = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == g)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

/*int     main(void)
{
    int arr[2] ={1, 5};

    int     *ptr = ft_memchr(arr, 53, 1);  //
    printf("%s", (char*)ptr);
}*/
