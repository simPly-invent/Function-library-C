/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:00:06 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/13 02:47:19 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	size_t	i;
	char	*p;

	if (!str)
		return (NULL);
	i = 0;
	p = malloc((ft_strlen(str) + 1) * (sizeof (*p)));
	if (!p)
		return (NULL);
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*---------------------Main-function-------------------------

int main(void)
{
	char str[] = "oui ca va le sgard ";
	char *p = ft_strdup(str);

	if(p)
	{
	printf("%s\n", p);
	free(p);
	}
	else
	{
	printf("Allocation échouée ou entrée NULL\n");
	}
}
*/
