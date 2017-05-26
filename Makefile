# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minizan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/09 17:53:06 by minizan           #+#    #+#              #
#    Updated: 2017/05/26 15:56:50 by minizan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
GIT		= https://github.com/locsta/42.git
PROJECT	= libft
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra

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

gitpush:
	@git status
	@git add .
	@git status
	@git commit -m "upload exercices"
	git push

gitverif:
	@rm -rf ~/From_home/Verifs/$(PROJECT)
	@git clone $(GIT) ~/42/Verifs/$(PROJECT)
	@cd ~/From_home/Verifs/$(PROJECT)
	@ls -la
	@sleep 3
	@cd ~/From_home/$(PROJECT)

backup:
	@rm -rf /Volumes/USB/$(PROJECT)
	@cp -r ~/From_home/$(PROJECT) /Volumes/USB/$(PROJECT)
