/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 13:03:45 by lflint            #+#    #+#             */
/*   Updated: 2020/10/31 13:03:46 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *cs;

	cs = (unsigned char*)s;
	while (n--)
	{
		if (*cs == (unsigned char)c)
			return (cs);
		cs++;
	}
	return (NULL);
}
