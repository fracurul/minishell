# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/17 17:56:25 by fracurul          #+#    #+#              #
#    Updated: 2023/10/01 23:37:57 by fracurul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#########################################
#                LIB NAME               #
#########################################

NAME = libft.a

#########################################
#              COMPILATOR               #
#########################################

CC = gcc

#########################################
#           COMPILATOR FLAGS            #
#########################################

FLAGS = -Wall -Wextra -Werror

#########################################
#           LIB FUNCTIONS               #
#########################################

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
	ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
	ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \
	get_next_line.c get_next_line_utils.c get_next_line_bonus.c get_next_line_utils_bonus.c \
	ft_printf.c ft_printf_utils.c ft_printf_utils2.c \



#########################################
#              LIB INDEX                #
#########################################

AR =  ar -curs

#########################################
#               OBJECTS                 #
#########################################

OBJ = $(SRC:.c=.o)

#########################################
#            CLEAN FUNCTION             #
#########################################

CLEAN = rm -rf

#########################################
#              COMPILE ALL              #
#########################################

all: $(NAME)
$(NAME) : $(OBJ)
	@$(AR) $(NAME) $(OBJ)

#########################################
#           COMPILE .c to .o            #
#########################################

%.o: %.c
	@echo "compilando archivos"
	@$(CC) $(FLAGS) -c -o $@ $<

#########################################
#              DELETE .o                #
#########################################

clean:
	@$(CLEAN) $(OBJ) $(OBJBONUS)

#########################################
#              DELETE ALL               #
#########################################
fclean : clean
	@$(CLEAN) $(NAME)

#########################################
#         DELETE ALL & REMAKE           #
#########################################

re: fclean all


.PHONY: all re clean fclean