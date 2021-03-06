/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 15:38:56 by lflint            #+#    #+#             */
/*   Updated: 2020/09/21 15:38:57 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (*str == '-')
			i++;
		str++;
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
