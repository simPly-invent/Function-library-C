/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:59:40 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/10 11:55:29 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)&s[len]);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	printf("ft_strchr : %s\n", ft_strchr("bonjour", 'j' + 261));
	printf("strchr    : %s\n", strchr("bonjour", 'j' + 261));
}
*/
