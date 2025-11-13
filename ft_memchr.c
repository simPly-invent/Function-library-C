/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:57:44 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/13 01:58:25 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	if (!s)
		return (0);
	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
//-------------main-function--------------//
int main(void)
{
    char s[] = "oui je suis bonjours";

    char *p1 = ft_memchr(s, 's', 10);
    char *p2 = memchr(s, 's', 10);

    if (p1)
        printf("ft_memchr -> trouvé : '%c'\n", *p1);
    else
        printf("ft_memchr -> NULL\n");

    if (p2)
        printf("memchr    -> trouvé : '%c'\n", *p2);
    else
        printf("memchr    -> NULL\n");

    return 0;
}
*/
