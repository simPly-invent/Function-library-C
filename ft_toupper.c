/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed <mobenais@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:56:27 by mohamed           #+#    #+#             */
/*   Updated: 2025/11/06 17:43:13 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		ch -= CONVERT_CASE;
	return (ch);
}
/*
int main(void)
{
    printf("a -> %c\n", ft_toupper('a'));  // doit afficher A
    printf("z -> %c\n", ft_toupper('z'));  // doit afficher Z
    printf("A -> %c\n", ft_toupper('A'));  // doit rester A
    printf("Z -> %c\n", ft_toupper('Z'));  // doit rester Z
    printf("5 -> %c\n", ft_toupper('5'));  // doit rester 5
    printf("  -> %c\n", ft_toupper(' '));  // doit rester espace
    printf("+ -> %c\n", ft_toupper('+'));  // doit rester +
    printf("é (0xE9) -> %c\n", ft_toupper(0xE9)); // hors ASCII : inchangé
    return 0;
}
*/
