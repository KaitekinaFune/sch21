/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 13:04:16 by lflint            #+#    #+#             */
/*   Updated: 2020/10/31 13:04:17 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	unsigned char	chr;

	if ((unsigned char)c >= 0x80)
	{
		chr = (unsigned char)c / 0x40 + 0xC0;
		write(fd, &chr, 1);
		chr = (unsigned char)c % 0x40 + 0x80;
		write(fd, &chr, 1);
	}
	else
		write(fd, &c, 1);
}
