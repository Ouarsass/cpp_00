# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/05 20:40:33 by mouarsas          #+#    #+#              #
#    Updated: 2023/01/09 21:38:28 by mouarsas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRCS =	phonebook.cpp \
		main.cpp \
		contact.cpp
HEADR = phonebook.hpp \
		contact.hpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
OBJS = $(SRCS:.cpp=.o)
all: $(NAME)
$(NAME) : $(OBJS)
		$(CC) $(OBJS) -o $(NAME)

%.o : %.cpp $(HEADR)
		$(CC) $(CFLAGS) -o $@ -c $<
clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean $(NAME)

.PHONY:	all clean fclean re