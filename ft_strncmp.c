/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:04:18 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/13 02:23:18 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *src, const char *dest, size_t n)
{
	size_t	i;

	if (!src || !dest || n == 0)
		return (0);
	i = 0;
	while ((src[i] && dest[i]) && (i < (n - 1)) && (src[i] == dest[i]))
	{
		i++;
	}
	return ((unsigned char)src[i] - (unsigned char)dest[i]);
}
/*
//-------------main-function-------------//
#include <string.h>

int main(void)
{
	printf("%d", ft_strncmp("", "", 5));
	printf("%d", strncmp("", "", 5));
}
*/
