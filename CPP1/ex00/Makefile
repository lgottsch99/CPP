# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgottsch <lgottsch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/27 15:59:50 by lgottsch          #+#    #+#              #
#    Updated: 2025/05/29 17:18:52 by lgottsch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = zombie

CC = c++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

# rules
$(NAME):
	 $(CC) $(CFLAGS) $(SRC) -o $(NAME)


all: $(NAME)

clean: fclean

fclean:
	rm -f $(NAME)

re: clean fclean all

.PHONY: all clean fclean re