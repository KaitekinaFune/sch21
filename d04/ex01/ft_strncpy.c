/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 18:40:23 by lflint            #+#    #+#             */
/*   Updated: 2020/09/19 22:32:40 by lflint           ###   ########.fr       */
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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;
	unsigned int i;

	i = 0;
	b = ft_strlen(src);
	while (i < n)
	{
		if (i >= b)
		{
			dest[i] = '\0';
			i++;
		}
		else
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
