/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:00:31 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/10 15:55:01 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *dest, const char *src)
{
	size_t	dest_len;
	size_t	i;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*ptr;
	size_t		total_len;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	total_len = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	ptr = ft_calloc(sizeof(char), total_len);
	if (!ptr)
		return (NULL);
	ft_strcat(ptr, s1);
	ft_strcat(ptr, s2);
	return (ptr);
}
/*
int main(void)
{
	char *str_1 = "oui je suis gentil";
	char *str_2 = "et con";
	printf("resultat = %s\n", ft_strjoin(str_1, str_2));
	printf("resultat = %s\n", strjoin(str_1, str_2));
}
*/
