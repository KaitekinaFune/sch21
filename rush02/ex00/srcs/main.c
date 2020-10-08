/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 11:47:47 by lflint            #+#    #+#             */
/*   Updated: 2020/10/03 11:47:48 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#include <stdio.h>

char	*ft_blocks(char *str, char *file);

char	*ft_strstr(char *src1, char *src2)
{
	int i;
	int h;
	char *c;

	c = malloc(1000);

	i = 0;
	h = 0;
	while (src1[i] != '\0')
	{
		c[i] = src1[i];
		i++;
	}
	while (src2[h] != '\0')
	{
		c[i] = src2[h];
		i++;
		h++;
	}
	return (c);
}

char	*ft_unt(char c, char *a)
{
	char *num;
	int i;
	int h;

	i = 0;
	h = 0;
	num = malloc(100);
	while (c != a[i])
		i++;
	while (a[i] != ':')
		i++;
	i++;
	while (a[i] == ' ' || a[i] == '\t')
		i++;
	h = 0;
	while (a[i] >= 33 && a[i] <= 126 && a[i] != '\n' && a[i] != '\0')
	{
		num[h] = a[i];
		i++;
		h++;
	}
	num[h] = '\0';
	return (num);
}

char	*ft_untw(char *str, char *a)
{
	int i;
	int h;
	char *num;

	num = malloc(1000);
	i = 0;
	h = 0;
	while (!(str[0] == a[i] && str[1] == a[i + 1]))
		i++;
	while (a[i] != ':')
		i++;
	i++;
	while (a[i] == ' ' || a[i] == '\t')
		i++;
	h = 0;
	while (a[i] >= 33 && a[i] <= 126 && a[i] != '\n' && a[i] != '\0')
	{
		num[h] = a[i];
		i++;
		h++;
	}
	num[h] = '\0';
	return (num);
}

char	*ft_unh(char *str, char *a)
{
	char c[2];
	char *ten;
	int h;
	int i;

	h = 0;
	i = 0;
	ten = malloc(100);
	c[0] = str[0];
	c[1] = '0';
	while (!(c[0] == a[i] && c[1] == a[i + 1]))
			i++;
	while (a[i] != ':')
		i++;
	i++;
	while (a[i] == ' ' || a[i] == '\t')
		i++;
	h = 0;
	while (a[i] >= 33 && a[i] <= 126 && a[i] != '\n' && a[i] != '\0')
	{
		ten[h] = a[i];
		i++;
		h++;
	}
	ten[h] = '\0';
		if (str[1] != '0')
	return (ft_strstr(ten, ft_unt(str[1], a)));
	return (ten);
}

char	*ft_unth(char *str, char *a)
{
	int i;
	int h;
	char *num;

	num = malloc(100);
	i = 0;
	h = 0;
	while (a[i] != '\0')
	{
		if (a[i] == '1' && a[i + 1] == '0' && a[i + 2] == '0')
		{
			
			if (a[i + 4] == ' ' || a[i + 4] == '\t' || a[i + 4] == ':')
				break;
		}
			i++;
	}
	while (a[i] != ':')
		i++;
	i++;
	while (a[i] == ' ' || a[i] == '\t')
		i++;
	h = 0;
	while (a[i] >= 33 && a[i] <= 126 && a[i] != '\n' && a[i] != '\0')
	{
		num[h] = a[i];
		i++;
		h++;
	}
	num[h] = '\0';
	if (str[1] == '1')
		return (ft_strstr(ft_strstr(ft_unt(str[0], a), num), ft_untw(&str[1], a)));
	else if (str[1] == '0')
		return (ft_strstr(ft_strstr(ft_unt(str[0], a), num), ft_unt(str[2], a)));
	return (ft_strstr(ft_strstr(ft_unt(str[0], a), num), ft_unh(&str[1], a)));
}

int		main(int argc, char **argv)
{
	int fd;
	int length;
	if (argc < 2)
		return (1);
	if((fd = dir_parse(1)) == -1)
		return (1);
	
	length = ft_strlen(argv[1]) - 1;
	if (length / 3 < 1)
		printf("%s\n", ft_blocks(argv[1], ft_filetostr(fd)));
	else
		ft_display_loop();

	//printf("%s\n", ft_filetostr(fd));
	//printf("%s\n", ft_blocks(argv[1], ft_filetostr(fd)));
	//printf("%d\n", fd);			//debug
	//ft_display(fd);


}

char	*ft_blocks(char *str, char *file)
{
	int i;
	int num;

	num = 0;
	while (str[i] != '\0')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}

	if (num < 10)
		return (ft_unt(*str, file));
	if (num < 20)
		return (ft_untw(str, file));
	if (num < 100)
		return (ft_unh(str, file));
	return (ft_unth(str, file));
}