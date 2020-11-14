/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_format_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:19:51 by lflint            #+#    #+#             */
/*   Updated: 2020/11/14 18:33:39 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*pf_hex_int_get_base(t_flags *flags)
{
	if (flags->hex__upper)
		return (PF_HEX_UP);
	return (PF_HEX_LOW);
}

static char	*pf_hex_int(char *converted, t_flags *flags)
{
	int		size;
	char	*ws_char;
	char	*str;

	size = 0;
	if (flags->precision_enabled && !flags->precision_negative)
		size = flags->precision - ft_strlen(converted);
	else if (!flags->side && flags->ws_char == '0')
		size = flags->width - ft_strlen(converted);
	ws_char = ft_chrmult('0', ft_zero_if_neg(size));
	str = ws_char;
	return (ft_strjoin_free(str, converted, 3));
}

char		*pf_format_hex(t_flags *flags)
{
	unsigned int	decimal;
	char			*str;

	decimal = va_arg(flags->args, unsigned int);
	flags->hex__upper = flags->letter == 'X';
	if (pf_int_should_be_empty(decimal == 0, flags))
		return (ft_emptystr());
	str = ft_itoa_base(decimal, pf_hex_int_get_base(flags));
	str = pf_hex_int(str, flags);
	str = pf_put_poops(flags, str, 0, 0);
	return (str);
}
