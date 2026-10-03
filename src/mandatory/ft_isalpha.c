/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:56:15 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/13 01:56:34 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
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
