# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvan-tui <tvan-tui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 16:06:29 by tvan-tui          #+#    #+#              #
#    Updated: 2024/11/12 10:26:44 by tvan-tui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS_DIR = srcs
SRCS = $(SRCS_DIR)/ft_printf.c $(SRCS_DIR)/ft_printpointer.c $(SRCS_DIR)/ft_putnbr_hex.c $(SRCS_DIR)/ft_putnbr_dec.c $(SRCS_DIR)/ft_printunsigned.c $(SRCS_DIR)/ft_putchar.c $(SRCS_DIR)/ft_putstr.c $(SRCS_DIR)/ft_strdup.c
OBJECTS = $(SRCS:.c=.o)
BONUS_OBJECTS = $(BONUS_SRCS:.c=.o)
INCLUDES = -I includes
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
%.o : %.c
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(SRCS_DIR)/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re