# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboulest <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 17:33:05 by aboulest          #+#    #+#              #
#    Updated: 2022/12/06 16:06:42 by aboulest         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

MY_SRC = ft_putchar.c ft_putstr.c ft_putnbr_di.c ft_putnbr_u.c print_arg.c ft_convertbase.c ft_printf.c

MY_OBJ = $(MY_SRC:.c=.o)

CFLAGS += -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(MY_OBJ)
		ar -crs $(NAME) $(MY_OBJ)

clean:
		$(RM) $(MY_OBJ)

fclean: clean
		$(RM) $(NAME)
	
re: fclean all

.PHONY : clean fclean re
