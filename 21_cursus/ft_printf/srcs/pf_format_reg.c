/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_format_reg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:20:10 by lflint            #+#    #+#             */
/*   Updated: 2020/11/14 18:33:52 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*g_fmt_key = "cspdiuxX%";
char	*(*g_fmt_value[10])(t_flags *) = {
	&pf_format_char,
	&pf_format_string,
	&pf_format_pointer,
	&pf_format_int,
	&pf_format_int,
	&pf_format_uint,
	&pf_format_hex,
	&pf_format_hex,
	&pf_format_percent
};

void	*pf_format_get(char key)
{
	size_t			index;

	index = 0;
	while (g_fmt_key[index])
	{
		if (g_fmt_key[index] == key)
			return (g_fmt_value[index]);
		index++;
	}
	return (NULL);
}
