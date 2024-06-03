# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user <user@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/19 20:53:11 by user              #+#    #+#              #
#    Updated: 2024/05/19 21:07:01 by user             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

all : $(NAME)

$(NAME) :
	$(MAKE) -C .. all
	cp ../libftprintf.a $(NAME)
	gcc main.c $(NAME)

clean :
	$(MAKE) -C .. clean

fclean : clean
	rm -rf a.out $(NAME)

re : fclean
	$(MAKE) all