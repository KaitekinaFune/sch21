/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 21:54:53 by lflint            #+#    #+#             */
/*   Updated: 2020/10/02 21:54:54 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *temp;

	temp = malloc(sizeof(t_btree));
	temp->item = item;
	temp->left = NULL;
	temp->right = NULL;
	return (temp);
}
