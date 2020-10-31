/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 18:30:02 by lflint            #+#    #+#             */
/*   Updated: 2020/09/24 18:30:03 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int min, int max)
{
	int i;
	int *arr;

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

int		ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
		return (-1);
	*range = ft_rrange(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
