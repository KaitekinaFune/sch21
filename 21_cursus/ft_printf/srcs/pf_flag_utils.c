/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_flag_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:19:37 by lflint            #+#    #+#             */
/*   Updated: 2020/11/14 17:38:39 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_flag_validate(t_flags *flags)
{
	if (flags->valid)
		return ;
	flags->valid = (flags->width_enabled || flags->precision_enabled
					|| flags->hex__upper);
	flags->valid = flags->valid && flags->letter != '\0';
	flags->done = flags->letter == '\0';
}

void	pf_flag_initialize(t_flags *flags)
{
	flags->letter = '\0';
	flags->valid = 0;
	flags->minus_sign_used = 0;
	flags->side = 0;
	flags->ws_char = ' ';
	flags->width_enabled = 0;
	flags->width = 0;
	flags->width_negative = 0;
	flags->precision_enabled = 0;
	flags->precision = 0;
	flags->precision_negative = 0;
	flags->hex__upper = 0;
}
