/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_flag_parser.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:19:31 by lflint            #+#    #+#             */
/*   Updated: 2020/11/14 18:28:20 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		pf_flag_parse_value(t_flags *flags, char *str)
{
	int		value;

	if (str[*(flags->index)] == '*')
	{
		value = va_arg(flags->args, int);
		*(flags->index) += 1;
	}
	else
	{
		value = ft_atoi(str + *(flags->index));
		*(flags->index) += ft_itoa_base_nsize(value, 10) - 1;
	}
	return (value);
}

static void		pf_flag_parse_width(t_flags *flags, char *str)
{
	int		value;

	flags->width_enabled = 1;
	value = pf_flag_parse_value(flags, str);
	if (value < 0)
	{
		flags->side = 1;
		value *= -1;
		flags->width_negative = 1;
		flags->ws_char = ' ';
	}
	flags->width = value;
}

static void		pf_flag_parse_precision(t_flags *flags, char *str)
{
	int		value;
	size_t	zero_skip;

	*(flags->index) += 1;
	zero_skip = 0;
	while ((str[*(flags->index) + zero_skip]) == '0')
		zero_skip++;
	flags->precision_enabled = 1;
	value = pf_flag_parse_value(flags, str);
	if (value < 0)
	{
		value *= -1;
		flags->precision_negative = 1;
	}
	flags->precision = value;
	*(flags->index) += zero_skip;
	if (value == 0)
		*(flags->index) -= 1;
}

static void		pf_flag_handle_minus(t_flags *flags, char *str)
{
	char	current;

	current = str[*(flags->index)];
	if (current == '-')
	{
		flags->minus_sign_used = 1;
		flags->ws_char = ' ';
		flags->side = 1;
	}
	else if (current == '0')
	{
		if (!flags->minus_sign_used)
			flags->ws_char = '0';
	}
	else
	{
		if ((current = str[*(flags->index)]) != '.')
			pf_flag_parse_width(flags, str);
		if ((current = str[*(flags->index)]) == '.')
			pf_flag_parse_precision(flags, str);
	}
}

void			pf_flag_parse(t_flags *flags, size_t start, size_t end)
{
	size_t	length;
	char	*str;
	size_t	index;
	size_t	*temp;

	length = end - start;
	if (!(str = malloc((length + 1) * sizeof(char))))
		return ;
	ft_memcpy(str, flags->format + start, length);
	str[length] = '\0';
	index = 0;
	temp = flags->index;
	flags->index = &index;
	while (index < length)
	{
		pf_flag_handle_minus(flags, str);
		index++;
	}
	flags->index = temp;
	free(str);
	pf_flag_validate(flags);
}
