/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 11:01:40 by lflint            #+#    #+#             */
/*   Updated: 2020/09/18 11:41:24 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void		ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	int a;
	int b;

	a = 47;
	b = 10;

	int div = 0;
	int *ptrd;
	ptrd = &div;
	int *ptrm;
	int mod = 0;
	ptrm = &mod;

	ft_div_mod(a, b, ptrd, ptrm);
	printf("%d\n", *ptrd);
	printf("%d", *ptrm);

}
