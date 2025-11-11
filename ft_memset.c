/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:59:17 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/07 18:09:29 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	if (!s)
		return (0);
	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
/*
//-------------test-function----------------
#include <string.h>
int main(void)
{
	char str[] = "yesssss";
	printf("before : %s\n", str);
	ft_memset(str, 2, 5);
	printf("after : %s\n", str);
	
	char str2[] = "yesssss";
        printf("before : %s\n", str2);
        memset(str2, 2, 5);
        printf("after : %s\n", str2);
}
*/
