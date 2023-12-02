/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:39:45 by asayad            #+#    #+#             */
/*   Updated: 2023/11/30 16:02:30 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	f(void *s)
 {
 	*(int *)s += 5;
 }*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst || !(*f))
		return ;
	temp = lst;
	while (temp)
	{
		(*f)(temp->content);
		temp = temp->next;
	}
}
