/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:45:11 by asayad            #+#    #+#             */
/*   Updated: 2023/11/30 16:02:45 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	del(void *p)
{
	free(p);
	p = NULL;
}
*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*next_node;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp)
	{
		next_node = temp->next;
		del(temp->content);
		free(temp);
		temp = next_node;
	}
	*lst = NULL;
}
