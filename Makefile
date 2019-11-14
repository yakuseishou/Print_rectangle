# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/14 01:53:22 by kchen2            #+#    #+#              #
#    Updated: 2019/11/14 02:28:31 by kchen2           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = print_rect

FLAG = -Wall -Werror -Wextra

FILES = ft_putchar \
		main \
		rush00

SRCS = $(addsuffix .c, $(addprefix srcs/, $(FILES)))

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all