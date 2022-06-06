# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 17:02:24 by lixu              #+#    #+#              #
#    Updated: 2022/04/20 13:20:11 by lixu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRC = ft_strlen.c ft_atoi.c ft_isdigit.c ft_isalpha.c ft_isprint.c ft_isascii.c ft_isalnum.c\
ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_toupper.c ft_tolower.c\
ft_strnstr.c ft_strrchr.c ft_calloc.c ft_bzero.c ft_memset.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
ft_memchr.c ft_itoa.c ft_substr.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c\
ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_split.c
OBJ = $(SRC:.c=.o)
INCLUDE = libft.h

BONUSSRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c\

BONUSOBJ = $(BONUSSRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

B = .

bonus: $(B)

$(B): $(BONUSOBJ) $(INCLUDE)
	$(LIB) $(NAME) $(BONUSOBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ) $(BONUSOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus
