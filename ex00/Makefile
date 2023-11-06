# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etlaw <ethanlxz@gmail.com>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/04 19:45:18 by lpang             #+#    #+#              #
#    Updated: 2023/11/05 01:16:25 by etlaw            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -std=c++98


OBJS = obj/megaphone.o \

all: $(NAME)

re: fclean all

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS)

obj:
	mkdir obj

obj/%.o: %.cpp | obj
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

.PHONY: all re clean fclean
