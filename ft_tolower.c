/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed <mobenais@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 18:43:41 by mohamed           #+#    #+#             */
/*   Updated: 2025/11/06 17:42:52 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		ch += CONVERT_CASE;
	return (ch);
}
//---------------------main-function-----------------------//
/*
int main(void)
{
	printf("A --> a = %c\n", ft_tolower('A'));
	return (0);
}
*/
