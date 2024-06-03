# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user <user@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/16 14:57:41 by user              #+#    #+#              #
#    Updated: 2024/05/19 20:57:27 by user             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT_PATH = libft
LIBFT = $(LIBFT_PATH)/libft.a

CC = clang
CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar
ARFLAGS = rcs

SOURCES = ft_print_hex.c ft_print_ptr.c ft_print_unsigned.c ft_printf_utils.c \
ft_printf.c

OBJECTS	= $(SOURCES:.c=.o)

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(LIBFT_PATH)

all : $(LIBFT) $(NAME)

$(LIBFT) :
	make -C $(LIBFT_PATH)

$(NAME): $(OBJECTS)
	cp $(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

clean :
	make clean -C $(LIBFT_PATH)
	$(RM) $(OBJECTS)

fclean : clean
	make fclean -C $(LIBFT_PATH)
	$(RM) $(NAME)

re	:	fclean all

.PHONY:	all clean fclean re libft