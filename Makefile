FILES_C = ft_printf.c conditions.c conditions2.c conversor1016.c conversorvoid.c ft_strcpy.c ft_itoaLL.c libft.c libft/ft_itoa.c libft/ft_strlen.c libft/ft_toupper.c
OBJS = $(FILES_C:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
all: $(NAME)
$(NAME): $(OBJS)
	$(MAKE) -C ./libft all
	cp libft/libft.a ${NAME}
	ar rcs $(NAME) $(OBJS)
	ranlib ${NAME}
clean:
	$(RM) $(OBJS)
	$(MAKE) -C ./libft clean
fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C ./libft clean
re: fclean all
.PHONY: all bonus clean fclean re

