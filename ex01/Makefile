# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juitz <juitz@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 14:03:54 by juitz             #+#    #+#              #
#    Updated: 2024/12/13 14:04:41 by juitz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = TAMUFPNC

CXX = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp\
		Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

RM = rm -rf

all: $(NAME)
$(NAME): $(OBJS)
	@$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Program ready!"

clean: 
	@$(RM) $(OBJS)
	@echo "Program cleaned successfully!"

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re