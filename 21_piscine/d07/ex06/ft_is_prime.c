/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 18:37:47 by lflint            #+#    #+#             */
/*   Updated: 2020/09/22 18:37:48 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= (nb / 3))
	{
		if (i * i == nb)
			return (1);
		i++;
	}
	return (0);
}

int		ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (ft_sqrt(nb) == 1)
		return (0);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	return (1);
}
