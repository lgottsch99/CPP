
NAME = bureau

CC = c++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98 

SRC= main.cpp  Bureaucrat.cpp Form.cpp

# rules
$(NAME):
	 $(CC) $(CFLAGS) $(SRC) -o $(NAME)


all: $(NAME)

clean: fclean

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re clean