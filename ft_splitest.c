/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:24:25 by asayad            #+#    #+#             */
/*   Updated: 2023/11/13 15:24:26 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	countword(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != '\0')
			j++;
		while (s[i] != c && s[i])
			i++;
	}
	return (j);
}

int	charcount(const char *s, char c, int *p)
{
	int	nw;

	nw = 0;
	while (s[*p] == c && s[*p])
		(*p)++;
	while (s[*p + nw] != c && s[*p + nw])
		nw++;
	return (nw);
}

void	*allocfail(char **ar, int k)
{
	if (!ar[k])
	{
		while (k >= 0)
		{
			free(ar[k - 1]);
			k--;
		}
	}
	free(ar);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	char	**ar;
	int		k;

	k = 0;
	i = 0;
	ar = malloc((countword(s, c) + 1) * sizeof(char **));
	if (!ar || !s)
		return (allocfail(ar, k));
	while (k < countword(s, c))
	{
		ar[k] = malloc((charcount(s, c, &i) + 1) * sizeof(char));
		if (!ar[k])
			return (allocfail(ar, k));
		strlcpy(ar[k], s + i, charcount(s, c, &i) + 1);
		k++;
		i += charcount(s, c, &i);
	}
	ar[k] = NULL;
	return (ar);
}

/*int main()
{
	char **ar;
	int i = 0;
	char s[] = "";
//	printf("%d\n", countword(s, ' '));
	ar = ft_split(s, ' ');
	while (ar[i] != NULL)
	{
		printf("%s\n", ar[i]);
		free(ar[i]);
		i++;
	}
	free(ar);
	return (0);}*/
