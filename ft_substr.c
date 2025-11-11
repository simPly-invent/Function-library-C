/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed <mobenais@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 22:45:57 by mohamed           #+#    #+#             */
/*   Updated: 2025/11/10 20:10:59 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_empty_str(void)
{
	char	*p;

	p = malloc(sizeof(char));
	if (!p)
		return (NULL);
	p[0] = '\0';
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			total_len;
	char			*ptr;

	i = 0;
	total_len = ft_strlen(s);
	if (start >= total_len)
		return (ft_empty_str());
	if (len > total_len - start)
		len = total_len - start;
	ptr = malloc(sizeof(*ptr) * (len + 1));
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int main(void)
{
	char const	tab[] = "oui je sais que";
	printf("Result : %s", ft_substr(tab, 5, 50));
}
*/
