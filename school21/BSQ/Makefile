# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsilverc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/10 12:10:57 by vsilverc          #+#    #+#              #
#    Updated: 2020/08/12 17:35:14 by skathryn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq 

SRCS = *.c

HEADERS = ft_bsq.h

FLAGS = -Wall -Wextra -Werror -I

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(HEADERS) $(SRCS) 
	gcc -o $(NAME) *.o

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
