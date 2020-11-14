/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:18:05 by lflint            #+#    #+#             */
/*   Updated: 2020/10/31 14:18:06 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *elem;

	new = NULL;
	while (lst)
	{
		if (!(elem = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, elem);
		lst = lst->next;
	}
	return (new);
}
