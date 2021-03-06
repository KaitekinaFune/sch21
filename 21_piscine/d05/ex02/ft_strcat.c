/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 12:42:19 by lflint            #+#    #+#             */
/*   Updated: 2020/09/20 12:42:20 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	char *c;

	c = dest;
	i = 0;
	j = 0;
	while(dest[j] != '\0')
		j++;
	while(*src != '\0')
	{
		dest[j] = *src;
		j++;
		src++;
	}
	dest[j] = '\0';
	return (c);
}
