/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 13:04:45 by lflint            #+#    #+#             */
/*   Updated: 2020/10/31 13:04:46 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	char	*str;
	int		i;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		if (!(str = (char*)malloc(sizeof(char) * (len1 + ft_strlen(s2) + 1))))
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			str[len1] = s2[i];
			len1++;
		}
		str[len1] = s2[i];
		return (str);
	}
	return (NULL);
}
