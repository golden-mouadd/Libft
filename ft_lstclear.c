/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouabous <mouabous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:48:04 by mouabous          #+#    #+#             */
/*   Updated: 2026/10/27 08:09:54 by mouabous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*nextnode;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		nextnode = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = nextnode;
	}
	*lst = NULL;
}
