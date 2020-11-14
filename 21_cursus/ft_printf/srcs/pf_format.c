/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:20:24 by lflint            #+#    #+#             */
/*   Updated: 2020/11/14 18:32:46 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_format(t_flags *flags, size_t *index)
{
	void				*formatter;
	size_t				start;

	flags->forced_length = -1;
	flags->index = index;
	start = *index;
	pf_flag_initialize(flags);
	while ((flags->letter = flags->format[*index]))
	{
		formatter = pf_format_get(flags->letter);
		if (formatter != NULL || !pf_is_flag(flags->letter))
			break ;
		*index += 1;
	}
	if (start != *index)
		pf_flag_parse(flags, start, *index);
	pf_format_process(flags, formatter);
}

void	pf_format_process(t_flags *flags, char *(*formatter)(t_flags *))
{
	char	*str;

	if (formatter == NULL)
		formatter = &pf_format_empty;
	*(flags->index) += 1;
	str = (*(formatter))(flags);
	str = pf_flag_handle(flags, str);
	pf_putstr(str, flags, flags->forced_length);
	free(str);
}
