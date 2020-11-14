/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_format_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:20:06 by lflint            #+#    #+#             */
/*   Updated: 2020/11/14 18:34:30 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*pf_format_uint(t_flags *flags)
{
	unsigned int	decimal;
	char			*itoa;

	decimal = va_arg(flags->args, unsigned int);
	if (pf_int_should_be_empty(decimal == 0, flags))
		return (ft_emptystr());
	itoa = ft_itoa_u_base(decimal, PF_DECIMAL);
	if (itoa && flags->precision_enabled)
		return (pf_put_poops(flags, itoa, 0, 0));
	return (itoa);
}
