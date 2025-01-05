# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/05 17:26:35 by moelalj           #+#    #+#              #
#    Updated: 2025/01/05 17:26:41 by moelalj          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

g++ = c++

RM = rm -rf

SRC = main.cpp

OBJS := $(SRC:.cpp=.o)

all: $(NAME)

%.o:%.cpp easyfind.hpp
	$(g++) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(g++) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all