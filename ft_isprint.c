/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:57:11 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/09 16:51:53 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int ch)
{
	if (ch >= 32 && ch <= 126)
	{
		return (1);
	}
	return (0);
}
/*
//-------it-work-like-this---------//
int	ft_isprint(int ch)
{
	unsigned char	uc;

	uc = (unsigned char)ch;
	return (uc >= 32 && uc <= 126);
}


int main(void)
{
	if(ft_isprint(127) == 1)
		printf("Your string is printable");
	else
		printf("Your string is not");
}
*/
