/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:01:14 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/10 20:11:20 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	if (size == 0)
	{
		return (ft_strlen(src));
	}
	len = 0;
	i = 0;
	while (src[len])
		len++;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
int main(void)
{
	char str1[] = "oui je m'appelle";
	char dest1[4];

	char str2[] = "oui je m'appelle";
        char dest2[4];

	printf("%ld", ft_strlcpy(dest1, str1, 0));
	printf("%ld", strlcpy(dest2, str2, 0));	
}
*/
