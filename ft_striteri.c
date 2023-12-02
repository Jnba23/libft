/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:10:25 by asayad            #+#    #+#             */
/*   Updated: 2023/11/30 15:47:49 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	f(unsigned int i, char *s)
{
	if (*(s + i) >= 65 && *(s + i) <= 90)
	{
		*(s + i) = *(s + i) + 32;
	}
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (*(s + i))
	{
		f(i, s + i);
		i++; 
	}
}
