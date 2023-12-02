/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:13:19 by asayad            #+#    #+#             */
/*   Updated: 2023/11/30 15:50:51 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*src;
	char	*d;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	src = (char *)s;
	if (start >= ft_strlen(src))
		return (ft_strdup(""));
	if (len > ft_strlen(src) - start)
		len = ft_strlen(src) - start;
	d = malloc(len + 1);
	if (!d)
		return (NULL);
	while (i < len)
	{
		d[i] = src[start + i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
