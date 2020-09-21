/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 12:06:32 by lflint            #+#    #+#             */
/*   Updated: 2020/09/20 12:06:34 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (*s1 != '\0' && *s2 != '\0' && index < n)
	{
			s1++;
			s2++;
			index++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}