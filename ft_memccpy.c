/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed <mohamed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:57:29 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/06 18:45:47 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		uc;
	unsigned char		*s1;
	const unsigned char	*s2;

	i = 0;
	uc = (unsigned char)c;
	s1 = (unsigned char *)dest;
	s2 = (const unsigned char *)src;
	while (i < n)
	{
		s1[i] = s2[i];
		if (s2[i] == uc)
			return (&s1[i] + 1);
		i++;
	}
	return (NULL);
}
/*
//-------------main-function-----------//
int main()
{
	char src[] = "bonjeour";
	char dest[] = "oui je suis malade";

	ft_memccpy(dest, src, 'e', 5);
	__builtin_printf("test 1 : %s\n", dest);
}
*/
