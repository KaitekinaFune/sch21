/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:21:00 by lflint            #+#    #+#             */
/*   Updated: 2020/11/14 18:19:01 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_putchar(t_flags *flags, char c)
{
	write(1, &c, 1);
	flags->count += 1;
}

int		pf_is_flag(char c)
{
	if (ft_isdigit(c) || ft_strcontain("-.*0", c))
		return (1);
	return (0);
}

void	pf_putstr(char *str, t_flags *flags, int length)
{
	int		index;

	if (!str || length == 0)
		return ;
	if (length == -1)
		while (*str)
			pf_putchar(flags, *str++);
	else
	{
		index = 0;
		while (index < length)
			pf_putchar(flags, str[index++]);
	}
}

int		pf_vibe_check(t_flags *flags, int offset)
{
	if (flags->width_enabled && flags->precision_enabled)
	{
		if (flags->width_negative && !flags->precision_negative)
			return (flags->precision);
		else if (!flags->width_negative && flags->precision_negative)
			return (flags->ws_char == '0' ? flags->width - offset : 0);
		else if (flags->width_negative && flags->precision_negative)
			return (0);
		else
		{
			if (flags->ws_char == '0' && flags->precision == 0)
				return (flags->precision > flags->width ?
					ft_zero_if_neg(flags->width - offset) : flags->precision);
			else
				return (flags->precision);
		}
	}
	else if (flags->width_enabled && !flags->precision_enabled)
		return (!flags->width_negative && flags->ws_char == '0' ?
				flags->width - offset : 0);
	else if (!flags->width_enabled && flags->precision_enabled)
		return (!flags->precision_negative ? flags->precision : 0);
	return (0);
}

char	*pf_put_poops(t_flags *flags, char *abs_itoa, int negative,
														int offset)
{
	int		required;
	char	*zeros;
	char	*str;
	size_t	length;

	length = ft_strlen(abs_itoa);
	required = pf_vibe_check(flags, negative + offset);
	required -= length;
	required = ft_zero_if_neg(required);
	if (negative)
		required++;
	if (!(zeros = ft_chrmult('0', required)))
		return (abs_itoa);
	str = ft_strjoin_free(zeros, abs_itoa, 3);
	if (negative)
		str[0] = '-';
	return (str);
}
