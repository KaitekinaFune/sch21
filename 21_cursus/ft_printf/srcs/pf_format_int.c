/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_format_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:19:45 by lflint            #+#    #+#             */
/*   Updated: 2020/11/14 18:33:58 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		pf_int_should_be_empty(int eq_zero, t_flags *flags)
{
	return (eq_zero && flags->precision_enabled && flags->precision == 0);
}

char	*pf_format_int(t_flags *flags)
{
	long	decimal;
	char	*str;

	decimal = va_arg(flags->args, int);
	if (pf_int_should_be_empty(decimal == 0, flags))
		return (ft_emptystr());
	str = ft_itoa_base(ft_abs(decimal), PF_DECIMAL);
	str = pf_put_poops(flags, str, decimal < 0, 0);
	return (str);
}
