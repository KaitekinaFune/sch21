/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 22:30:42 by lflint            #+#    #+#             */
/*   Updated: 2020/09/29 22:34:41 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *arr;
	int i;

	arr = malloc(length * sizeof(int));
	if (arr == 0)
		return (0);
	i = 0;
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}
