# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 15:35:26 by Fayel-ha          #+#    #+#              #
#    Updated: 2021/11/29 16:57:37 by fayel-ha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CFLAGS = -Wall -Werror -Wextra -std=c++98 # -g3 -fsanitize=address

SRCS = phonebook.cpp \
		utils.cpp

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
