/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:54:27 by lflint            #+#    #+#             */
/*   Updated: 2020/11/14 18:14:09 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*pf_memjoin(void *s1, size_t l1, void *s2, size_t l2)
{
	char	*str;

	if (!s1 || !s2 || !(str = malloc(l1 + l2)))
		return (NULL);
	ft_memcpy(str, s1, l1);
	ft_memcpy(str + l1, s2, l2);
	return (str);
}

char	*pf_strjoin_sided(char const *s1, char const *s2, int side)
{
	if (side)
		return (ft_strjoin(s2, s1));
	return (ft_strjoin(s1, s2));
}
