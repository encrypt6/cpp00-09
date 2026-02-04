# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/12 19:55:52 by elsikira          #+#    #+#              #
#    Updated: 2025/09/22 18:49:24 by elsikira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = searchReplace

CXX = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp searchReplace.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)
	rm -f $(OBJ)

re: fclean all

.PHONY: all clean fclean re
