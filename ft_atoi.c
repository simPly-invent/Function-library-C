/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:54:32 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/10 20:10:05 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_is_space(char c)
{
	if (((c >= 9) && (c <= 13))
		|| (c == 32))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long long int	result;
	int				sign;
	long long int	i;

	if (!str)
		return (0);
	i = 0;
	sign = 1;
	result = 0;
	while (ft_is_space(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	while (ft_isdigit(str[i]))
	{
		if (sign >= 0 && result > ((LLONG_MAX - (str[i] - '0')) / 10))
			return (-1);
		else if (sign < 0 && result < ((LLONG_MIN + (str[i] - '0')) / 10))
			return (0);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
 * ----------------main-function-----------------
*/
/*
int main(int ac, char **av)
{
 	(void)ac;
	char *s1 = "-9223372036854775808";
 	__builtin_printf("%d\n", ft_atoi(av[1]));
 	__builtin_printf("%d", atoi(av[1]));
}
*/
