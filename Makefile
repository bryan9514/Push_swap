# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/17 14:21:58 by brturcio          #+#    #+#              #
#    Updated: 2025/01/18 08:53:46 by brturcio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = $(addsuffix .c, main push_swap outils ft_split)

OBJS := $(FILES:%.c=%.o)

NAME = push_swap.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all : $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)
re : fclean all

.PHONY : all clean fclean re 
