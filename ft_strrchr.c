/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:53:24 by asayad            #+#    #+#             */
/*   Updated: 2023/11/30 15:50:14 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	p = (char *)s;
	i = 0;
	while (p[i])
		i++;
	if (c == '\0')
		return (p + i);
	while (i >= 0)
	{
		if (p[i] == (char)c)
			return (p + i);
		i--;
	}
	return (NULL);
}
