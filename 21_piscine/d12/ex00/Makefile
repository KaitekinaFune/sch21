SRCS	=	srcs/ft_puterr.c srcs/main.c
NAME	=	ft_display_file
CFLAGS	=	-Wall -Wextra -Werror
INCL	=	includes/ft.h	
CC		=	gcc
RM		=	rm -rf
OBJS	=	$(SRCS:.c=.o)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS) $(INCL)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean		
			$(RM) $(NAME)
re:			fclean all