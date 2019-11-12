# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazuara <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 11:45:30 by bazuara           #+#    #+#              #
#    Updated: 2019/11/11 18:47:16 by bazuara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

LNAME = libft.a

SOURCE = *.c

LSOURCE = *.o

CFLAGS = -Wall -Wextra -Werror

LFLAGS = -c

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(LFLAGS) $(SOURCE)
	ar rc $(LNAME) $(LSOURCE)
#remove * and add specific files

clean:
	rm -f *.o

fclean:
	rm -f $(LNAME)

re: fclean all
