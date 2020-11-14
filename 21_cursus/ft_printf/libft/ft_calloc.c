/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 13:02:55 by lflint            #+#    #+#             */
/*   Updated: 2020/10/31 13:02:57 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *s;

	if ((s = malloc(count * size)) == NULL)
		return (NULL);
	if (s)
		ft_bzero(s, count * size);
	return (s);
}
