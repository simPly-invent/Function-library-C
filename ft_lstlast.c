/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:22:27 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/11 11:37:49 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*last;

	a = malloc(sizeof(t_list));
	b = malloc(sizeof(t_list));
	c = malloc(sizeof(t_list));

	if (!a || !b || !c)
		return (1);

	a->content = "Premier";
	b->content = "Deuxième";
	c->content = "Dernier";

	a->next = b;
	b->next = c;
	c->next = NULL;

	last = ft_lstlast(a);

	if (last)
		printf("Le dernier maillon contient : %s\n", (char *)last->content);
	else
		printf("La liste est vide.\n");

	free(a);
	free(b);
	free(c);
	return (0);
}*/
