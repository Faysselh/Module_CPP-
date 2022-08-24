# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/30 16:10:19 by Fayel-ha          #+#    #+#              #
#    Updated: 2021/12/30 16:10:20 by Fayel-ha         ###   ########.fr        #
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
