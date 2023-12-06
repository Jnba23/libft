/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:17:10 by asayad            #+#    #+#             */
/*   Updated: 2023/12/06 18:30:04 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	check_overflow(int s)
{
	if (s < 0)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	num;

	num = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str == '0')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		if ((num * 10 + (*str - 48)) > 9223372036854775807)
			return (check_overflow(sign));
		num = (num * 10) + (*str - 48);
		str++;
	}
	return (num * sign);
}
// #include <limits.h>
// int main()
// {
// 	printf("%d\n", atoi("9223372036854775810"));
// 	printf("%d\n", ft_atoi("9223372036854775810"));
// }