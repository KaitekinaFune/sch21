/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 16:36:16 by lflint            #+#    #+#             */
/*   Updated: 2020/09/30 16:36:18 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		sum(int a, int b)
{
	return (a + b);
}

int		sub(int a, int b)
{
	return (a - b);
}

int		mul(int a, int b)
{
	int i;

	i = a * b;
	return (i);
}

int		div(int a, int b)
{
	return (a / b);
}

int		mod(int a, int b)
{
	return (a % b);
}
