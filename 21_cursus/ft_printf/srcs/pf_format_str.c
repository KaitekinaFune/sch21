/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_format_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:20:02 by lflint            #+#    #+#             */
/*   Updated: 2020/11/14 18:34:27 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*pf_format_string(t_flags *flags)
{
	char	*str;

	str = va_arg(flags->args, char *);
	if (str == NULL)
		str = "(null)";
	if (flags->precision_enabled && !flags->precision_negative)
		return (ft_substr(str, 0, flags->precision));
	return (ft_strdup(str));
}
