/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 22:53:54 by asayad            #+#    #+#             */
/*   Updated: 2023/11/30 15:17:41 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;

	if (count < 0)
		return (NULL);
	s = (char *)malloc(count * (size));
	if (!s)
		return (NULL);
	s = ft_memset(s, 0, count * size);
	return ((void *)s);
}
