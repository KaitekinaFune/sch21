/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 15:24:29 by lflint            #+#    #+#             */
/*   Updated: 2020/09/28 15:25:03 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putstr(char *str, char *str2, char *str3, char *str4)
{
	while (*str)
		write(2, str++, 1);
	while (*str2)
		write(2, str2++, 1);
	while (*str3)
		write(2, str3++, 1);
	while (*str4)
		write(2, str4++, 1);
}

void	ft_putstr2(char *str)
{
	while (*str)
		write(2, str++, 1);
}
