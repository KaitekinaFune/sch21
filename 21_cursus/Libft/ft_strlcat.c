/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 13:04:49 by lflint            #+#    #+#             */
/*   Updated: 2020/10/31 13:04:50 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src,
size_t dstsize)
{
	size_t	size;
	size_t	i;

	i = 0;
	size = ft_strlen(dst) + ft_strlen(src);
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (*dst)
		dst++;
	while ((i < dstsize - (size - ft_strlen(src) + 1)) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (size);
}
