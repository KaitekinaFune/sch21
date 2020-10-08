/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 16:36:11 by lflint            #+#    #+#             */
/*   Updated: 2020/09/30 16:36:12 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_arrtoint(int arr[], int size)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (i < size)
	{
		n = 10 * n + arr[i];
		i++;
	}
	return (n);
}

int		ft_atoi(char *str)
{
	int arr[10];
	int i;
	int j;

	if (*str == '\0')
		return (0);
	i = 0;
	j = 0;
	while (*str < '0' || *str > '9')
	{
		if (*str++ == '-')
			i++;
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			return (0);
	}
	while (*str >= '0' && *str <= '9')
	{
		arr[j] = (*str - 48);
		j++;
		str++;
	}
	if (i % 2 == 0)
		return (ft_arrtoint(arr, j));
	else
		return (-(ft_arrtoint(arr, j)));
}
