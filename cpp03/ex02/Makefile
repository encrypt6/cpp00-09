# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/09 22:40:57 by elsikira          #+#    #+#              #
#    Updated: 2025/10/03 11:33:22 by elsikira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

CXX = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp

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
