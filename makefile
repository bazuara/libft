# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazuara <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 11:45:30 by bazuara           #+#    #+#              #
#    Updated: 2020/11/10 10:29:10 by bazuara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIBPATH = srcs/

PF_PATH = srcs/ft_printf/

OBJ_FOLDER = obj/

FILES = \
			ft_atod.c \
			ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_error.c \
			ft_freearray.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_lstadd_back_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstmap_bonus.c \
			ft_lstnew_bonus.c \
			ft_lstsize_bonus.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strcmp.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strjoin_free.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \
			get_next_line.c \

PF_FILES = \
			extra_tools.c \
			ft_checkflags.c \
			ft_preandpos.c \
			ft_printchar.c \
			ft_printf.c \
			ft_printhex.c \
			ft_printint.c \
			ft_printpointer.c \
			ft_printstring.c \
			ft_printsymbol.c \
			ft_printuint.c \
			ft_printword.c \
			ft_strtoupper.c \
			ft_uitoa.c \
			hex_tools.c \
 

SOURCE = $(addprefix $(LIBPATH), $(FILES))

PF_SOURCE = $(addprefix $(PF_PATH), $(PF_FILES))

OBJ_SOURCE = $(addprefix $(OBJ_FOLDER), $(notdir $(SOURCE:.c=.o)))

PF_OBJ_SOURCE = $(addprefix $(OBJ_FOLDER), $(notdir $(PF_SOURCE:.c=.o)))

CFLAGS = -Wall -Wextra -Werror

LFLAGS = -c

all: $(NAME)

$(NAME):
	@gcc $(CFLAGS) $(LFLAGS) $(SOURCE) $(PF_SOURCE)
	@mv *.o obj/
	@ar rc $(NAME) $(OBJ_SOURCE) $(PF_OBJ_SOURCE)
	@ranlib $(NAME)
	@echo "Compiled '$(NAME)' successfully"${RESET}

bonus: $(NAME) 

clean:
	@rm -f $(OBJ_SOURCE)
	@echo "Cleaned objects successfully"${RESET}

fclean: clean
	@rm -f $(NAME)
	@echo "Removed '$(NAME)' with success"${RESET}

re: fclean all

.PHONY: clean fclean
