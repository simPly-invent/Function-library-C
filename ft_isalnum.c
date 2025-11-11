/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:55:59 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/06 18:13:37 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	if ((uc >= 'a' && uc <= 'z')
		|| (uc >= 'A' && uc <= 'Z')
		|| (uc >= '0' && uc <= '9'))
		return (1);
	return (0);
}
/*
//-----------------------main-function----------------------------
#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    int result;

    c = '5';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'Q';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'l';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = '+';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    return 0;
}
*/
