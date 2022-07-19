# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/08 11:34:02 by jgravalo          #+#    #+#              #
#    Updated: 2022/02/24 15:24:02 by jgravalo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS            = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
				  ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
				  ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
                  ft_memset.c ft_memmove.c ft_split.c ft_strchr.c \
				  ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcpy.c \
				  ft_strlcat.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
                  ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
				  ft_tolower.c ft_toupper.c \
				  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
				  ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
				  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS            = $(SRCS:.c=.o)
BONUS_OBJS		= $(BONUS_FILES:.c=.o)
CC              = gcc
RM              = rm -f
CFLAGS          = -Wall -Wextra -Werror
NAME			= libft.a
all:            $(NAME)
$(NAME):        $(OBJS)
				ar rcs $(NAME) $(OBJS)
				ranlib ${NAME}
bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
				ranlib ${NAME}
clean:			
				$(RM) $(OBJS) $(BONUS_OBJS)
fclean:			clean
				$(RM) $(NAME)
re:             fclean $(NAME)
.PHONY:			all bonus clean fclean re
