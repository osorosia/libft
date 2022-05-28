# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnishimo <rnishimo@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 19:29:20 by rnishimo          #+#    #+#              #
#    Updated: 2022/05/22 05:13:51 by rnishimo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror

SRCS += $(addprefix ft_is/, \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isnumber.c \
	ft_isprint.c \
	)

SRCS += $(addprefix ft_mem/, \
	ft_bzero.c \
	ft_calloc.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	)

SRCS += $(addprefix ft_put/, \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putnstr_fd.c \
	ft_putstr_fd.c \
	)

SRCS += $(addprefix ft_str/, \
	ft_atoi.c \
	ft_itoa.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strdup_to_c.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strlen_to_c.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strndup.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \
	)

SRCS += $(addprefix get_next_line/, \
	get_next_line.c \
	)

OBJS = $(SRCS:%.c=%.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h
	gcc $(CFLAGS) -I. -c -o $@ $<

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	norminette | grep Error

.PHONY: all clean fclean re norm
