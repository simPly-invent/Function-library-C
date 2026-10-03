/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:04:31 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/13 02:23:41 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (!*s2)
		return ((char *)s1);
	i = 0;
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && (i + j) < n)
		{
			j++;
			if (s2[j] == '\0')
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (0);
}
/*
//-------------------main-function------------------//
int main(void)
{
    const char *haystack = "hello world";
    const char *needle   = "wor";

    char *r1 = ft_strnstr(haystack, needle, 11);
    char *r2 = strnstr(haystack, needle, 11);

    if (r1 == r2)
        printf("Test 1 OK\n");
    else
        printf("Test 1 FAIL\n");

    // Cas avec needle pas trouvé
    needle = "zzz";
    r1 = ft_strnstr(haystack, needle, 11);
    r2 = strnstr(haystack, needle, 11);

    if (r1 == r2)
        printf("Test 2 OK\n");
    else
        printf("Test 2 FAIL\n");

    // Cas avec needle vide
    needle = "";
    r1 = ft_strnstr(haystack, needle, 11);
    r2 = strnstr(haystack, needle, 11);

    if (r1 == r2)
        printf("Test 3 OK\n");
    else
        printf("Test 3 FAIL\n");

    return 0;
}
*/
