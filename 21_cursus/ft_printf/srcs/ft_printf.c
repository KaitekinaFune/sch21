/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:20:48 by lflint            #+#    #+#             */
/*   Updated: 2020/11/14 18:25:26 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_flags flags;

	flags.format = format;
	flags.count = 0;
	va_start(flags.args, format);
	pf_handle(&flags);
	va_end(flags.args);
	return (flags.count);
}
