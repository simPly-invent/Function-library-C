/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:58:46 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/13 01:59:36 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;

	if (dest == 0 || src == 0)
		return (0);
	s1 = (unsigned char *)dest;
	s2 = (const unsigned char *)src;
	if (s1 < s2)
		while (n-- > 0)
			*s1++ = *s2++;
	else
	{
		s1 += n;
		s2 += n;
		while (n-- > 0)
			*--s1 = *--s2;
	}
	return (dest);
}
/*
//---------------main-function-----------------------------

int main()
{
     char str1[] = "oui je suis malade";
     char *dest = str1 + 1;
     char str2[] = "oui je suis malade";
     char *dest2 = str2 + 1;

     __builtin_printf("str1 before ft_memmove : ");
     __builtin_printf("%s\n", str1);

     ft_memmove(str1, dest, 4);

     __builtin_printf("str1 after ft_memmove : ");
     __builtin_printf("%s\n", dest);

     __builtin_printf("str1 before r*memmove : ");
     __builtin_printf("%s\n", str2);

     memmove(str2, dest2, 4);

     __builtin_printf("str1 after r*_memmove : ");
     __builtin_printf("%s\n", dest2);

     return 0;
}
*/
