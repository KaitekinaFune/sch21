/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_format_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:19:56 by lflint            #+#    #+#             */
/*   Updated: 2020/11/14 18:35:22 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char		*pf_format_pointer_second_part(char *str,
							unsigned long ptr, t_flags *flags)
{
	if (ptr == 0 && flags->precision_enabled &&
			flags->precision == 0)
	{
		free(str);
		return (ft_emptystr());
	}
	return (str);
}

char			*pf_format_pointer(t_flags *flags)
{
	unsigned long	ptr;
	char			*itoa;
	char			*str;

	ptr = (unsigned long)va_arg(flags->args, void *);
	itoa = ft_itoa_u_base(ptr, PF_HEX_LOW);
	str = pf_put_poops(flags, itoa, 0, 2);
	str = pf_format_pointer_second_part(str, ptr, flags);
	str = ft_strjoin_free("0x", str, 2);
	return (str);
}
