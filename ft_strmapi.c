/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:20:55 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/06 17:41:02 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	test(unsigned int i, char j)
{
	j -= (char)i;
	return (j);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	ptr = malloc(sizeof(*ptr) * (ft_strlen(s) + 1));
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] = f((unsigned int)i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int main(void)
{
	const char *c = "je suis malade";
	char *ptr;

	ptr = ft_strmapi(c, test);
	if (!ptr)
		printf("erreur mon frere\n");
	printf("result : %s\n", ptr);
	free(ptr);
	return 0;
}
*/
