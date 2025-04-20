# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 19:37:57 by ethebaul          #+#    #+#              #
#    Updated: 2024/11/19 18:40:41 by ethebaul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \

SRCSB = ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstmap_bonus.c \

OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)
OBJSB = $(SRCSB:.c=.o)
DEPSB = $(SRCSB:.c=.d)

CFLAGS = -Wall -Wextra -Werror -MD -MP

CC = cc
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS) Makefile
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

-include $(DEPS) $(DEPSB)

bonus: $(OBJS) $(OBJSB) Makefile
	make $(NAME) OBJS="$(OBJS) $(OBJSB)"

clean:
	rm -f $(OBJS) $(OBJSB) $(DEPS) $(DEPSB)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re bonus