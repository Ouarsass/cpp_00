# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/05 20:04:39 by mouarsas          #+#    #+#              #
#    Updated: 2023/01/06 22:43:21 by mouarsas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ./megaphone
SRCS = ./megaphone.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
OBJS = $(SRCS:.cpp=.o)
all: $(NAME)
$(NAME) : $(OBJS)
		$(CC) $(OBJS) -o $(NAME)

%.o : %.cpp
		$(CC) $(CFLAGS) -o $@ -c $<
clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean $(NAME)

.PHONY:	all clean fclean re