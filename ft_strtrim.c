/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 01:01:05 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/10 16:48:53 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_chr(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	char		*ptr;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && check_chr(s1[i], set))
		i++;
	while (s1[j] >= 0 && check_chr(s1[j - 1], set))
		j--;
	ptr = ft_substr(s1, i, j - i);
	return (ptr);
}
/*
int main(void)
{
	printf("result : %s", ft_strtrim("uouiuuuu", "u"));
}
*/
