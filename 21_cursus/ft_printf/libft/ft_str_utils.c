/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:46:33 by lflint            #+#    #+#             */
/*   Updated: 2020/11/14 17:51:10 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char *s1, char *s2, int policy)
{
	char	*joined;

	joined = ft_strjoin(s1, s2);
	if (policy != 0)
	{
		if (policy == 1 || policy == 3)
			free(s1);
		if (policy == 2 || policy == 3)
			free(s2);
	}
	return (joined);
}

int		ft_strcontain(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_emptystr(void)
{
	char	*str;

	if (!(str = malloc(sizeof(char))))
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_chrtostr(char c)
{
	char	*str;

	if (!(str = malloc(2 * sizeof(char))))
		return (NULL);
	str[0] = c;
	str[1] = '\0';
	return (str);
}



