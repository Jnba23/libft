/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:21:31 by asayad            #+#    #+#             */
/*   Updated: 2023/11/30 16:00:12 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void del(void *p)
{
	free(p);
	p = NULL;
}
*/
/*void *f(void *s)
{
	int i = 0;
	char *str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	void	*newcontent;
	t_list	*new_head;	

	new_head = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		newcontent = (*f)(lst->content);
		new_node = ft_lstnew(newcontent);
		if (!new_node)
		{
			free(newcontent);
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		ft_lstadd_back(&new_head, new_node);
		lst = lst->next;
	}
	return (new_head);
}
