/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:05:42 by asayad            #+#    #+#             */
/*   Updated: 2023/11/30 15:50:34 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	check_begining(const char *s1, const char *set)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		if (ft_check(s1[i], set) == 1)
			i++;
		else
			break ;
	}
	return (i);
}

static size_t	check_end(const char *s1, const char *set, size_t j, size_t i)
{
	while (j > i)
	{
		if (ft_check(s1[j], set) == 1)
			j--;
		else
			break ;
	}
	j++;
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	sl;
	char	*r;
	size_t	j;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	if (*set == 0 || *s1 == 0)
		return (ft_strdup(s1));
	sl = ft_strlen(s1);
	i = check_begining(s1, set);
	j = sl - 1;
	j = check_end(s1, set, j, i);
	r = malloc((j - i + 1) * sizeof(char));
	if (!r)
		return (NULL);
	ft_strlcpy(r, s1 + i, j - i + 1);
	return (r);
}
