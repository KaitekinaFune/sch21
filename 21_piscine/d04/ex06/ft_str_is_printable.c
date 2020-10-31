/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 20:30:24 by lflint            #+#    #+#             */
/*   Updated: 2020/09/19 22:49:52 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (*str++)
	{
		a++;
	}
	return (a);
}

int		ft_str_is_printable(char *str)
{
	int index;
	int len;

	if (str[0] == '\0')
		return (1);
	len = ft_strlen(str);
	index = 0;
	while (index < len)
	{
		if (*str <= 0x1F)
			return (0);
		index++;
		str++;
	}
	return (1);
}
