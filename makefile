# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazuara <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 11:45:30 by bazuara           #+#    #+#              #
#    Updated: 2019/11/08 16:03:09 by bazuara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

LNAME = libft.a

LSOURCE = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memset.c ft_strlen.c\
		ft_toupper.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strchr.c\
		ft_tolower.c ft_strcmp.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c\
		ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c\
		ft_strlcat.c

CFLAGS = -Wall -Wextra -Werror

LFLAGS = -c

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(LFLAGS) $(LSOURCE)
	ar rc $(LNAME) $(LSOURCE)
#remove * and add specific files

clean:
	rm -f *.o

fclean:
	rm -f $(LNAME)

re: fclean all
