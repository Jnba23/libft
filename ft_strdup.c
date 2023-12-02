/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:04:09 by asayad            #+#    #+#             */
/*   Updated: 2023/11/30 15:47:33 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	l;
	char	*d;

	l = ft_strlen(s1);
	d = malloc((l + 1) * sizeof(char));
	if (!d)
		return (NULL);
	ft_strlcpy(d, s1, l + 1);
	return (d);
}
