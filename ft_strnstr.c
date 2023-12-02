/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:04:23 by asayad            #+#    #+#             */
/*   Updated: 2023/11/30 15:49:58 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	nl;

	i = 0;
	if (haystack == NULL && len <= 0)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	nl = ft_strlen(needle);
	while (i < len && *haystack && i + nl <= len)
	{
		j = 0;
		while (j < nl && haystack[i + j] == needle[j])
		{
			if (j == nl - 1)
				return ((char *)(haystack + i));
			else if (haystack[i + j] != needle[j])
				break ;
			j++;
		}
		i++;
	}
	return (NULL);
}
