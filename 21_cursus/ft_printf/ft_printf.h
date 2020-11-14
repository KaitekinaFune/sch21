/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:45:40 by lflint            #+#    #+#             */
/*   Updated: 2020/11/14 18:33:52 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>

# include "libft.h"

# define PF_DECIMAL "0123456789"
# define PF_HEX_LOW "0123456789abcdef"
# define PF_HEX_UP "0123456789ABCDEF"

typedef	struct	s_flags
{
	int			count;
	const char	*format;
	va_list		args;
	int			fd;
	int			done;
	char		letter;
	int			valid;
	int			minus_sign_used;
	int			side;
	char		ws_char;
	int			width_enabled;
	int			width;
	int			width_negative;
	int			precision_enabled;
	int			precision;
	int			precision_negative;
	int			hashtag;
	size_t		*index;
	int			forced_length;
	int			hex__upper;
}				t_flags;

int				ft_printf(const char *format, ...);

void			pf_handle(t_flags *flags);

void			pf_flag_parse(t_flags *flags, size_t start, size_t end);
void			pf_flag_validate(t_flags *flags);
void			pf_flag_initialize(t_flags *flags);
char			*pf_flag_handle(t_flags *flags, char *formatted);

int				pf_is_flag(char c);
void			pf_putchar(t_flags *flags, char c);
void			pf_putstr(char *str, t_flags *flags, int length);
char			*pf_strjoin_sided(char const *s1, char const *s2, int side);
char			*pf_memjoin(void *s1, size_t l1, void *s2, size_t l2);
int				pf_int_should_be_empty(int eq_zero, t_flags *flags);
int				pf_vibe_check(t_flags *flags, int offset);
char			*pf_put_poops(t_flags *flags,
											char *abs_itoa, int negative,
											int offset);
void			*pf_format_get(char key);
void			pf_format(t_flags *flags, size_t *index);
char			*pf_format_char(t_flags *flags);
char			*pf_format_string(t_flags *flags);
char			*pf_format_pointer(t_flags *flags);
char			*pf_format_int(t_flags *flags);
char			*pf_format_uint(t_flags *flags);
char			*pf_format_hex(t_flags *flags);
char			*pf_format_percent(t_flags *flags);
char			*pf_format_empty(t_flags *flags);
void			pf_format_process(t_flags *flags, char *(*formatter)
														(t_flags *));

#endif
