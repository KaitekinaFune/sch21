/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <lflint@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 19:09:00 by lflint            #+#    #+#             */
/*   Updated: 2020/09/16 19:20:48 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb2(void)
{

char a1 = '0';
char a2 = '0';
char b1 = '0';
char b2 = '0';

	while (a1<= '9')
	{
		while (a2 <= '9')
		{
			while (b1 <= '9')
			{
				while (b2 <= '9')
				{
					write(1, &a1, 1);
					write(1, &a2, 1);
					write(1, " ", 1);
					write(1, &b1, 1);
					write(1, &b2, 1);
					write(1, ", ", 2);
				}
				b1++;
			}
			if (a2 =='9')
			{
				a2 = '0';
			} else a2++;	
		}
		a1++;
		if (a1 == '9' && a2 == '8' && b1 == '9' && b2 == '9') break;
	}
}	
/*
	for (char a1 = '0'; a1 <= '9'; a1++)
	{
		for (char a2 = '0'; a2 <= '9'; a2++)
		{
			for (char b1 = '0'; b1 <= '9'; b1++)
			{
				for (char b2 = '0'; b2 <= '9'; b2++)
				{
					write(1, &a1, 1);
					write(1, &a2, 1);
					write(1, " ", 1);
					write(1, &b1, 1);
					write(1, &b2, 1);
					write(1, ", ", 2);
				}
			}
		}
	}
}
*/
int main()

{
    ft_print_comb2();
}
