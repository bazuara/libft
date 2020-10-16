# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazuara <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 11:45:30 by bazuara           #+#    #+#              #
#    Updated: 2020/10/16 09:14:44 by bazuara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

LNAME = libft.a

SOURCE = srcs/ft_atoi.c \
		 srcs/ft_isalpha.c \
		 srcs/ft_itoa.c \
		 srcs/ft_memcpy.c \
		 srcs/ft_putendl_fd.c \
		 srcs/ft_strchr.c \
		 srcs/ft_strlcat.c \
		 srcs/ft_strncmp.c \
		 srcs/ft_substr.c \
		 srcs/ft_bzero.c \
		 srcs/ft_isascii.c \
		 srcs/ft_memccpy.c \
		 srcs/ft_memmove.c \
		 srcs/ft_putnbr_fd.c \
		 srcs/ft_strcmp.c \
		 srcs/ft_strlcpy.c \
		 srcs/ft_strnstr.c \
		 srcs/ft_tolower.c \
		 srcs/ft_calloc.c \
		 srcs/ft_isdigit.c \
		 srcs/ft_memchr.c \
		 srcs/ft_memset.c \
		 srcs/ft_putstr_fd.c \
		 srcs/ft_strdup.c \
		 srcs/ft_strlen.c \
		 srcs/ft_strrchr.c \
		 srcs/ft_toupper.c \
		 srcs/ft_isalnum.c \
		 srcs/ft_isprint.c \
		 srcs/ft_memcmp.c \
		 srcs/ft_putchar_fd.c \
		 srcs/ft_split.c \
		 srcs/ft_strjoin.c \
		 srcs/ft_strjoin_free.c \
		 srcs/ft_strmapi.c \
		 srcs/ft_strtrim.c \
		 srcs/get_next_line.c

LSOURCE = $(SOURCE:.c=.o)

BONUSSRC = srcs/ft_lstadd_back_bonus.c \
		   srcs/ft_lstclear_bonus.c \
		   srcs/ft_lstiter_bonus.c \
		   srcs/ft_lstmap_bonus.c \
		   srcs/ft_lstsize_bonus.c \
		   srcs/ft_lstadd_front_bonus.c \
		   srcs/ft_lstdelone_bonus.c \
		   srcs/ft_lstlast_bonus.c \
		   srcs/ft_lstnew_bonus.c 

LBONUSSRC = $(BONUSSRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

LFLAGS = -c

all: $(NAME)

$(NAME):
	@gcc $(CFLAGS) $(LFLAGS) $(SOURCE)
	@mv *.o srcs/
	@ar rc $(LNAME) $(LSOURCE)
	@ranlib $(LNAME)
	@echo "Compiled '$(NAME)' successfully"${RESET}

bonus: 
	@gcc $(CFLAGS) $(LFLAGS) $(BONUSSRC)
	@mv *.o srcs/
	@ar rcs $(LNAME) $(LBONUSSRC)
	@echo "Compiled '$(NAME)' with bonus successfully"${RESET}

clean:
	@rm -f $(LSOURCE) $(LBONUSSRC)
	@echo "Cleaned objects successfully"${RESET}

fclean:
	@rm -f $(LNAME)
	@echo "Removed '$(LNAME)' with success"${RESET}

re: fclean all

.PHONY: clean fclean
