# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: whi <whi@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 14:12:34 by whi               #+#    #+#              #
#    Updated: 2025/01/28 10:58:34 by whi              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
#libft.a

CC := cc

CFLAGS	:= -Wall -Werror -Wextra
# -g -fsanitize=address -o 

SRCS = ft_strlen.c \
            ft_strlcpy.c \
            ft_isdigit.c \
            ft_isascii.c \
            ft_isalpha.c \
            ft_isalnum.c \
            ft_isprint.c \
            ft_toupper.c \
            ft_tolower.c \
            ft_memset.c  \
            ft_atoi.c \
            ft_bzero.c \
            ft_calloc.c \
            ft_itoa.c \
            ft_memchr.c \
            ft_memcmp.c \
            ft_memcpy.c \
            ft_memmove.c \
            ft_memset.c \
            ft_putchar_fd.c \
            ft_putendl_fd.c \
            ft_putstr_fd.c \
            ft_split.c \
            ft_strchr.c \
            ft_strdup.c \
            ft_striteri.c \
            ft_strjoin.c \
            ft_strlcat.c \
            ft_strlcpy.c \
            ft_strlen.c \
            ft_strmapi.c \
            ft_strncmp.c \
            ft_strnstr.c \
            ft_strrchr.c \
            ft_strtrim.c \
            ft_substr.c \
            ft_putnbr_fd.c\

BONUS_SRCS =	ft_lstnew.c \
                    ft_lstadd_front.c \
                    ft_lstsize.c \
                    ft_lstlast.c \
                    ft_lstadd_back.c \
                    ft_lstdelone.c \
                    ft_lstclear.c \
                    ft_lstiter.c \
                    ft_lstmap.c \

OBJS= ${SRCS:.c=.o}

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: ${NAME}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

bonus:		${OBJS} ${BONUS_OBJS}
			ar -rc ${NAME} ${OBJS} ${BONUS_OBJS}

clean:
	/bin/rm -f ${OBJS} ${BONUS_OBJS}

fclean: clean
	/bin/rm -f ${NAME}

re: fclean all

.PHONY: re fclean clean bonus all .c.o
