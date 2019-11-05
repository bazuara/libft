# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazuara <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 11:45:30 by bazuara           #+#    #+#              #
#    Updated: 2019/11/05 16:11:14 by bazuara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

LNAME = libft.a

LSOURCE = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memset.c  ft_strlen.c\
		ft_toupper.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strchr.c\
		ft_tolower.c ft_strcmp.c

CFLAGS = -Wall -Wextra -Werror

LFLAGS = -c

all: $(NAME)

$(NAME):
	gcc $(LFLAGS) $(LSOURCE)
	ar rc $(LNAME) $(LSOURCE)
#remove * and add specific files

clean:
	rm -f *.o
	rm -f *.out

fclean:
	rm -f $(LNAME)

re: fclean all
