/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_format_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:19:41 by lflint            #+#    #+#             */
/*   Updated: 2020/11/14 18:33:30 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*pf_format_char(t_flags *flags)
{
	char	c;

	c = (char)va_arg(flags->args, int);
	flags->forced_length = 1;
	return (ft_chrtostr(c));
}
