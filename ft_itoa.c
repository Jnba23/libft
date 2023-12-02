/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 01:23:04 by asayad            #+#    #+#             */
/*   Updated: 2023/11/30 11:46:22 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size(int n)
{
	int	size;

	size = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static void	negnum(char *s, int *n)
{
	if (*n < 0)
	{
		s[0] = '-';
		*n = -1 * (*n);
	}
}

char	*ft_itoa(int n)
{
	char	*s;
	int		j;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	j = size(n) + (n < 0);
	s = NULL;
	s = ft_calloc(j + 1, 1);
	if (!s)
		return (NULL);
	if (n < 0)
		negnum(s, &n);
	while (n / 10 != 0)
	{
		s[--j] = n % 10 + 48;
		n = n / 10;
	}
	s[j - 1] = n + 48;
	return (s);
}
