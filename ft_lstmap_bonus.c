/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:50:10 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/14 11:19:02 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*lstnew;
	void	*tmp;

	
	if (!lst || !del || !f)
		return (0);
	lstnew = NULL;
	while (lst != NULL)
	{
		tmp = f(lst ->content);
		node = ft_lstnew(tmp);
		if (!node)
		{
			del(tmp);
			ft_lstclear(&lstnew, del);
			return (NULL);
		}
		ft_lstadd_back(&lstnew, node);
		lst = lst ->next;
	}
	return (lstnew);
}
