/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:09:16 by lflint            #+#    #+#             */
/*   Updated: 2020/11/10 20:40:32 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"



int		ft_pf_parse(const char *format, va_list args)
{
	(void)format;
	(void)args;
	return (0);
}


int		ft_printf(const char *format, ...)
{
	char *dupe;
	va_list 	args;
	int			ch_count;

	dupe = ft_strdup(format);
	ch_count = 0;	
	va_start(args, format);
	ch_count += ft_pf_parse(dupe, args);
	va_end(args);	
	free((char *)dupe);
	return (ch_count);
}



int		main(void)
{
	printf("asdasd");
	ft_printf("%s\n", "hello");
}

