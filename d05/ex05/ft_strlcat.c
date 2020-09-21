/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 15:27:18 by lflint            #+#    #+#             */
/*   Updated: 2020/09/20 15:27:19 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned length;

	length = 1;
	i = 0;
	j = 0;
	while(dest[i] != '\0')
	{
		i++;
		length++;
	}
	while(src[j] != '\0' && i < (size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
		length++;
	}
	if (size > j)
	{
		while(i > size)
		{
			length++;
			j++;
		}
	}
	length--;
	dest[i] = '\0';
	return(length);
}