/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 17:00:11 by lflint            #+#    #+#             */
/*   Updated: 2020/09/24 17:00:12 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *arr;

	if (min >= max)
		return (0);
	i = 0;
	arr = (int *)malloc((max - min) * sizeof(int));
	if (arr == NULL)
		return (arr);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
