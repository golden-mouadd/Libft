/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouabous <mouabous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 09:13:13 by mouabous          #+#    #+#             */
/*   Updated: 2026/10/27 08:06:58 by mouabous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_nod;

	new_nod = malloc(sizeof(t_list));
	if (!new_nod)
		return (NULL);
	new_nod->content = content;
	new_nod->next = NULL;
	return (new_nod);
}
