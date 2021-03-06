/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 13:03:22 by lflint            #+#    #+#             */
/*   Updated: 2020/10/31 13:03:23 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(int c)
{
	if ((c >= 0040 && c <= 0077) || (c >= 0100 && c <= 0176))
		return (1);
	return (0);
}
