/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:17:55 by lflint            #+#    #+#             */
/*   Updated: 2020/10/31 14:18:32 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	t_list *ent;

	ent = *lst;
	while (ent)
	{
		temp = ent->next;
		if (del)
			del(ent->content);
		free(ent);
		ent = temp;
	}
	*lst = NULL;
}
