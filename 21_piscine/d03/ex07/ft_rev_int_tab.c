/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 20:14:01 by lflint            #+#    #+#             */
/*   Updated: 2020/09/19 00:28:26 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int a;
	int b;
	int ar[size];
	int og_size;

	i = 0;
	og_size = size;
	size--;
	while (size >= 0)
	{
		a = tab[i];
		b = tab[size];
		ar[i] = b;
		ar[size] = a;
		i++;
		size--;
	}
	i = 0;
	while (i <= og_size)
	{
		tab[i] = ar[i];
		i++;
	}
}
