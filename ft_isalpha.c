/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:56:15 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/06 18:13:47 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	if ((uc >= 'a' && uc <= 'z')
		|| (uc >= 'A' && uc <= 'Z'))
		return (1);
	return (0);
}
/*
//------------------------main--function---------------------------------
int main() 
{
   char c = 'L';

   if (ft_isalpha(c)) {
      __builtin_printf("%c is an alphabetic character.\n", c);
   } else {
      __builtin_printf("%c is not an alphabetic character.\n", c);
   }
   return 0;
}
*/
