/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 21:12:56 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/12 22:54:54 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
/*
----------------test-function---------------- 
#include <string.h>
int main()
{
	char str[] = "hfisghjfszfz";
	__builtin_printf("avant : %s\n", str);
	ft_bzero(str, 3);
	__builtin_printf("apres : %s\n", str);
	char str2[] = "hfisghjfszfz";
	__builtin_printf("avant : %s\n", str2);
        bzero(str2, 3);
        __builtin_printf("apres : %s", str2);
	return 0;
}
*/
