# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minizan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/09 17:53:06 by minizan           #+#    #+#              #
#    Updated: 2017/05/26 08:10:49 by minizan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
GIT		= vogsphere@vogsphere.42.fr:intra/2017/activities/libft/minizan
PROJECT	= libft
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra

### SOURCES ###
SRC			= ft_atoi.c \
			ft_bzero.c \
			ft_countwords.c \
			ft_delone.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_islower.c \
			ft_isprint.c \
			ft_isupper.c \
			ft_itoa.c \
			ft_lstadd.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_memalloc.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_strcat.c \
			ft_strchr.c \
			ft_strclr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdel.c \
			ft_strdup.c \
			ft_strequ.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strncat.c \
			ft_strcmp.c \
			ft_strncpy.c \
			ft_strnequ.c \
			ft_strnew.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strsplit.c \
			ft_strstr.c \
			ft_strsub.c \
			ft_strtrim.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_word_len.c

OBJ		= $(SRC:.c=.o)

### COLORS ###
NOC			= \033[0m
BOLD		= \033[1m
UNDERLINE	= \033[4m
BLACK		= \033[1;30m
RED			= \033[1;31m
GREEN		= \033[1;32m
YELLOW		= \033[1;33m
BLUE		= \033[1;34m
VIOLET		= \033[1;35m
CYAN		= \033[1;36m
WHITE		= \033[1;37m

### RULES ###

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

gitpush:
	@git status
	@git add .
	@git status
	@git commit -m "upload exercices"
	git push

gitclean: gitverif
	@cp -r .git ~/42/tmp
	git rm -rf *
	@git commit -m "git clean"
	@git push

gitverif:
	@rm -rf ~/42/Verifs/$(PROJECT)
	@git clone $(GIT) ~/42/Verifs/$(PROJECT)
	@cd ~/42/Verifs/$(PROJECT)
	@ls -la
	@sleep 3
	@cd ~/42/$(PROJECT)

backup:
	@rm -rf /Volumes/USB/$(PROJECT)
	@cp -r ~/42/$(PROJECT) /Volumes/USB/$(PROJECT)
