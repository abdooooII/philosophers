# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abouafso <abouafso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/14 19:16:42 by abouafso          #+#    #+#              #
#    Updated: 2024/07/14 19:45:52 by abouafso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

CC = CC

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = philo.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

%.o : %.c philo.h
		$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all