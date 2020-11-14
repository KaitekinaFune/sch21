/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_format_empty.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:19:48 by lflint            #+#    #+#             */
/*   Updated: 2020/11/14 18:33:31 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*pf_format_empty(t_flags *flags)
{
	if (flags->precision_enabled)
		flags->precision_enabled = 0;
	if (flags->letter == '\0')
		return (ft_emptystr());
	flags->forced_length = 1;
	return (ft_chrtostr(flags->letter));
}
