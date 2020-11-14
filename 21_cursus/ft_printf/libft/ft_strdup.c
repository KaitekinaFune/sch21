/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 13:04:42 by lflint            #+#    #+#             */
/*   Updated: 2020/10/31 13:04:43 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	void	*s2;

	len = ft_strlen(s1) + 1;
	if ((s2 = malloc(len)) == NULL)
		return (NULL);
	return ((char*)ft_memcpy(s2, s1, len));
}
