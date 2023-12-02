/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:17:10 by asayad            #+#    #+#             */
/*   Updated: 2023/11/30 11:41:19 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	next(int j, int sign, int num)
{
	if (j >= 19 && sign == 1)
		return (-1);
	if (j >= 19 && sign == -1)
		return (0);
	num = num * sign;
	return (num);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;
	int	j;

	j = 0;
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
		j++;
		num = num * 10 + (*str - 48);
		str++;
	}
	return (next(j, sign, num));
	return (num * sign);
}
