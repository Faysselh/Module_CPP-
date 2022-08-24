# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fayel-ha <fayel-ha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/05 19:06:42 by fayel-ha          #+#    #+#              #
#    Updated: 2022/01/05 19:10:11 by fayel-ha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = GearFourth

CFLAGS = -Wall -Werror -Wextra -std=c++98 #-g3 -fsanitize=address

SRCS = main.cpp

OBJ = $(SRCS:.cpp=.o)

%.o: %.cpp
		clang++ -c $(CFLAGS) $< -o $@

all: 		$(NAME)

$(NAME):	$(OBJ)
				clang++ $(CFLAGS) -o $(NAME) $(OBJ)

%:
	@:

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
