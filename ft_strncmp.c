/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:06:45 by asayad            #+#    #+#             */
/*   Updated: 2023/11/30 15:49:38 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 != *s2)
		{
			return ((unsigned char)(*s1) - (unsigned char)(*s2));
		}
		s1++;
		s2++;
		i++;
	}
	return (0);
}
