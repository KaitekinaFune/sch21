#⣿⣿⣿⣿⣿⣿⣿⡿⠛⠉⠉⠉⠉⠛⠻⣿⣿⠿⠛⠛⠙⠛⠻⣿⣿⣿⣿⣿⣿⣿⣿
#⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀⢀⣀⣀⡀⠀⠈⢄⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⣿⣿⣿⣿⣿
#⣿⣿⣿⣿⠏⠀⠀⠀⠔⠉⠁⠀⠀⠈⠉⠓⢼⡤⠔⠒⠀⠐⠒⠢⠌⠿⢿⣿⣿⣿⣿⣿
#⣿⣿⣿⡏⠀⠀⠀⠀⠀⠀⢀⠤⣒⠶⠤⠭⠭⢝⡢⣄⢤⣄⣒⡶⠶⣶⣢⡝⢿⣿⣿⣿
#⡿⠋⠁⠀⠀⠀⠀⣀⠲⠮⢕⣽⠖⢩⠉⠙⣷⣶⣮⡍⢉⣴⠆⣭⢉⠑⣶⣮⣅⢻⣿⣿
#⠀⠀⠀⠀⠀⠀⠀⠉⠒⠒⠻⣿⣄⠤⠘⢃⣿⣿⡿⠫⣿⣿⣄⠤⠘⢃⣿⣿⠿⣿⣿⣿
#⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠓⠤⠭⣥⣀⣉⡩⡥⠴⠃⠀⠈⠉⠁⠈⠉⠁⣴⣾⣿⣿⣿⣿
#⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠤⠔⠊⠀⠀⠀⠓⠲⡤⠤⠖⠐⢿⣿⣿⣿⣿⣿⣿
#⠀⠀⠀⠀⠀⠀⠀⠀⣠⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⣿⣿⣿⣿
#⠀⠀⠀⠀⠀⠀⠀⢸⣿⡻⢷⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣘⣿⣿⣿⣿⣿⣿
#⠀⠀⠀⠀⠀⠠⡀⠀⠙⢿⣷⣽⣽⣛⣟⣻⠷⠶⢶⣦⣤⣤⣤⣤⣶⠾⠟⣯⣿⣿⣿⣿
#⠀⠀⠀⠀⠀⠀⠉⠂⠀⠀⠀⠈⠉⠙⠛⠻⠿⠿⠿⠿⠶⠶⠶⠶⠾⣿⣟⣿⣿⣿⣿⣿
#⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿
#⣿⣿⣶⣤⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣤⣟⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿
#⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣶⣶⣶⣶⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀

DIR			=	srcs/
SRC			=	ft_printf.c \
				pf_flag_handler.c \
				pf_flag_parser.c \
				pf_flag_utils.c \
				pf_format_empty.c \
				pf_format_int.c \
				pf_format_uint.c \
				pf_format_char.c \
				pf_format_reg.c\
				pf_format_hex.c \
				pf_format_pointer.c \
				pf_format_percent.c \
				pf_format_str.c \
				pf_utils.c \
				pf_utils2.c \
				pf_handler.c \
				pf_format.c

SRCS 		=	$(SRC:%=$(DIR)%)

OBJS		=	$(SRCS:.c=.o)
HEAD		=	.

NAME		=	libftprintf.a
LIBFT		=	libft
LIBFT_LIB	=	libft.a

FLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f
LIB			=	ar -rcs

.c.o:		
		$(CC) $(FLAGS) -c $< -o $(<:.c=.o) -I$(HEAD) -I$(LIBFT)

$(NAME):	$(OBJS)
		make -C $(LIBFT)/
		cp $(LIBFT)/$(LIBFT_LIB) $(NAME)
		$(LIB) $(NAME) $(OBJS)

all:		$(NAME)

fclean:		clean
		$(RM) $(NAME)
		make fclean -C $(LIBFT)

clean:		
		$(RM) $(OBJS)
		make clean -C $(LIBFT)

re:			fclean all

.PHONY:	all clean fclean re .c.o
