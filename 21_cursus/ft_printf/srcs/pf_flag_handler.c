/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_flag_handler.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:19:18 by lflint            #+#    #+#             */
/*   Updated: 2020/11/14 18:26:46 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*pf_flag_handle_width(t_flags *flags, char *formatted)
{
	size_t	length;
	int		required;
	char	*ws_char;
	char	*str;
	char	letter;

	letter = ft_tolower(flags->letter);
	if ((flags->precision_enabled || flags->precision_negative)
			&& !ft_strcontain("s%", letter) && ((letter != 'x' && letter != 'o')
			|| flags->precision < flags->width))
	{
		flags->ws_char = ' ';
	}
	length = ft_strlen(formatted);
	required = flags->width - length;
	if (required < 0)
		return (formatted);
	ws_char = ft_chrmult(flags->ws_char, required);
	if (!ws_char)
		return (formatted);
	str = pf_strjoin_sided(ws_char, formatted, flags->side);
	flags->forced_length = required + length;
	free(ws_char);
	return (str);
}

static char	*pf_flag_handle_width_m(t_flags *flags, char *formatted)
{
	size_t	length;
	int		required;
	char	*ws_char;
	char	*str;

	if (flags->precision_enabled
			&& flags->precision != 0 && flags->letter != 'c')
		flags->ws_char = ' ';
	length = flags->forced_length;
	required = flags->width - length;
	if (required < 0)
		return (formatted);
	ws_char = ft_chrmult(flags->ws_char, required);
	if (!ws_char)
		return (formatted);
	if (flags->side)
		str = pf_memjoin(formatted, length, ws_char, required);
	else
		str = pf_memjoin(ws_char, required, formatted, length);
	flags->forced_length = required + length;
	free(ws_char);
	return (str);
}

char		*pf_flag_handle(t_flags *flags, char *formatted)
{
	char *str;

	if (!flags->valid)
		return (formatted);
	str = formatted;
	if (flags->width_enabled)
	{
		if (flags->forced_length == -1)
			str = pf_flag_handle_width(flags, str);
		else
			str = pf_flag_handle_width_m(flags, str);
	}
	if (str != formatted)
		free(formatted);
	return (str);
}
