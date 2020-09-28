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
		write(1, str++, 1);
	while (*str2)
		write(1, str2++, 1);
	while (*str3)
		write(1, str3++, 1);
	while (*str4)
		write(1, str4++, 1);
}
