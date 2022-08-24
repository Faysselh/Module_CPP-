# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 20:07:54 by Fayel-ha          #+#    #+#              #
#    Updated: 2021/12/13 20:07:59 by Fayel-ha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

CFLAGS = -Wall -Werror -Wextra -std=c++98 #-g3 -fsanitize=address

SRCS = main.cpp \
		Fixed.cpp

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