/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:20:52 by lflint            #+#    #+#             */
/*   Updated: 2020/11/14 17:23:40 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_handle(t_flags *flags)
{
	size_t			index;
	unsigned char	current;

	flags->done = 0;
	index = 0;
	while ((current = flags->format[index]) && !flags->done)
	{
		index++;
		if (current != '%')
			pf_putchar(flags, (char)current);
		else
			pf_format(flags, &index);
	}
}
