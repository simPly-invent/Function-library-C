/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:45:38 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/13 02:02:57 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count_word(char const *s1, char c)
{
	size_t	word;
	size_t	i;
	size_t	boul;

	i = 0;
	word = 0;
	boul = 1;
	while (s1[i])
	{
		if (s1[i] == c)
			boul = 1;
		if (s1[i] != c && boul == 1)
		{
			boul = 0;
			word++;
		}
		i++;
	}
	return (word);
}

static char	**ft_free_all(char **strs, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(strs[i++]);
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	j;
	size_t	k;
	char	**res;

	k = 0;
	res = ft_calloc(sizeof(char *), count_word(s, c) + 1);
	if (!res)
		return (NULL);
	while (*s)
	{
		j = 0;
		while (*s == c)
			s++;
		while (s[j] != c && s[j])
			j++;
		if (j != 0)
		{
			res[k] = ft_substr(s, 0, j);
			if (!res[k])
				return (ft_free_all(res, k));
		}
		k++;
		s += j;
	}
	return (res);
}
/*
int main(void)
{
    char c = ' ';
    const char *s1 = "             oui     je suis malade ";
    char **res = ft_split(s1, c);
    size_t i = 0;

    if (!res)
    {
        printf("ft_split returned NULL\n");
        return 1;
    }
    while (res[i])
    {
        printf("word %zu: \"%s\"\n", i, res[i]);
        free(res[i]);
        i++;
    }
    free(res);
    return 0;
}
*/
