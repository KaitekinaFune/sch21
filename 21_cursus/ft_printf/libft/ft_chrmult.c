/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrmult.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:25:31 by lflint            #+#    #+#             */
/*   Updated: 2020/11/14 17:25:36 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_chrmult(char c, size_t times)
{
	char	*str;

	if (!(str = malloc((times + 1) * sizeof(char))))
		return (NULL);
	ft_memset(str, c, times);
	str[times] = '\0';
	return (str);
}
