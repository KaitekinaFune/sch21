# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lflint <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/27 15:44:36 by lflint            #+#    #+#              #
#    Updated: 2020/09/27 17:03:05 by lflint           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
CFLAGS	=	-c -Wall -Wextra -Werror
CC		=	gcc	$(CFLAGS)
INCS	=	includes
RM		=	rm -rf
NAME	=	libft.a

OBJS	=	$(SRCS:.c=.o)

compile:
		$(CC) $(SRCS)
clean:
		${RM} *.o
fclean: clean
		${RM} *.c
		
			
