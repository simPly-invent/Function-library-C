/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:58:02 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/13 01:58:46 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	const unsigned char		*ucs1;
	const unsigned char		*ucs2;

	if (!s1 || !s2)
		return (0);
	ucs1 = (const unsigned char *)s1;
	ucs2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ucs1[i] != ucs2[i])
			return (ucs1[i] - ucs2[i]);
		i++;
	}
	return (0);
}
/*
//----------------main-function-----------------------//
int main (void)
{
   char str1[] = "oui nous suis malade";
   char str2[] = "oui je suis malade";
   int res;

   res = ft_memcmp(str1, str2, 5);
   if(ret > 0) {
      printf("ft_memcmp : str2 is less than str1\n");
   }
   else if(res < 0) {
      printf("ft_memcmp : str1 is less than str2\n");
   }
   else {
      printf("ft_memcmp : str1 is equal to str2\n");
   }

   res = memcmp(str1, str2, 5);
   if(res > 0) {
      printf("memcmp : str2 is less than str1\n");
   }
   else if(res < 0) {
      printf("memcmp : str1 is less than str2\n");
   }
   else {
      printf("memcmp : str1 is equal to str2\n");
   }
   return(0);
}
*/
