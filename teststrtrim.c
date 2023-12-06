/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:05:42 by asayad            #+#    #+#             */
/*   Updated: 2023/11/10 15:05:43 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_check(char c, const char *s)
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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	setl;
	size_t	sl;
	char	*r;

	setl = ft_strlen(set);
	sl = ft_strlen(s1);
	r = malloc(sl + 1);
	if (!r)
		return (NULL);
	if (ft_strncmp(s1, set, setl) == 0)
	{
		ft_strlcpy(r, s1 + setl, sl - setl);
	}
	if (ft_strncmp(s1 + (sl - setl), set, setl) == 0)
	{
		ft_strlcpy(r, s1 + setl, sl - setl * 2);
	}
	return (r);
}

int main()
{
	char s1[] = "12a12a12a12a12a12a";
	char set[] = "12a";
	printf("%s", ft_strtrim(s1, set));
	return (0);
}
