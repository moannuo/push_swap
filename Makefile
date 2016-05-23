# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/19 16:20:54 by ademenet          #+#    #+#              #
#    Updated: 2016/05/19 16:29:49 by ademenet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


.PHONY: all clean fclean re norme

CC = gcc

FLAGS = -Wall -Wextra -Werror

CPP_FLAGS = -Iinclude

NAME = push_swap

SRC_PATH = ./src
LIB_PATH = ./lib
INC_PATH = ./include
OBJ_PATH = ./obj
OBJLIB_PATH = ./obj

SRC_NAME =	ft_error.c\
			ft_operations.c\
			ft_parsing.c\
			ft_solving.c

LIB_NAME = 	ft_atoi.c\
			ft_isascending.c\
			ft_isdescending.c\
			ft_isdigit.c\
			ft_issort.c\
			ft_lstappend.c\
			ft_lstnew.c

INC_NAME = ft_printf.h

OBJ_NAME = $(SRC_NAME:.c=.o)
OBJLIB_NAME = $(LIB_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
LIB = $(addprefix $(LIB_PATH)/, $(LIB_NAME))
INC = $(addprefix $(INC_PATH)/, $(INC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
OBJLIB = $(addprefix $(OBJLIB_PATH)/,$(OBJLIB_NAME))

all: $(NAME)

$(NAME): $(OBJ) $(OBJLIB)
	gcc
	@echo "\033[1;34mPush_swap\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) -o $@ -c $<

$(OBJLIB_PATH)/%.o: $(LIB_PATH)/%.c
	@mkdir $(OBJLIB_PATH) 2> /dev/null || true
	@$(CC) -o $@ -c $<

clean:
	@rm -rf ./obj
	@echo "\033[1;34mPush_swap\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[1;34mPush_swap\t\033[1;33mCleaning lib\t\033[0;32m[OK]\033[0m"

re: fclean all

norme:
	@norminette $(SRC) $(LIB) $(INC)
	@echo "\033[1;34mPush_swap\t\033[1;33mNorme\t\033[0;32m[OK]\033[0m"