/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 18:40:35 by lflint            #+#    #+#             */
/*   Updated: 2020/09/19 22:38:37 by lflint           ###   ########.fr       */
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

int		ft_str_is_alpha(char *str)
{
	int i;
	int b;

	i = 0;
	b = ft_strlen(str);
	if (*str == '\0')
		while (*str)
		{
			if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
				i++;
			str++;
		}
	return (i == b);
}
