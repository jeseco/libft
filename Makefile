# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: JEAN-SEBA <jcourtem@student.42quebec>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/26 10:27:53 by JEAN-SEBA         #+#    #+#              #
#    Updated: 2022/01/26 10:56:57 by jcourtem         ###   ########.fr        #
#    Updated: 2021/07/08 14:00:04 by JEAN-SEBA        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= 	gcc -Wextra -Wall -Werror -g -D BUFFER_SIZE=1 
NAME		= 	libft.a
FILES		= 	ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_memmove.c \
				ft_memchr.c	\
				ft_memcmp.c \
				ft_strlen.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_strlcpy.c \
				ft_strlcat.c \
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
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_striteri.c \
				ft_islower.c \
				ft_isupper.c \
				ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c \
				get_next_line.c \
				get_next_line_utils.c

PERSONAL_FUNC = personal_function/ft_intversion.c \
				personal_function/ft_itohex.c \
				personal_funciton/ft_putptr.c \

P_OBJS 	=	$(LIBFTPRINTF:.c=.o)

GNL_OBJS = 	$(GNL:.c=.o) 

OBJS 	= $(FILES:.c=.o)

OBJSB = $(BONUSF:.c=.o)

OBJSP = $(PERSONAL_FUNC:.c=.o)

all: bonus printf $(NAME) $(GNL_OBJS) $(P_OBJS)

$(NAME): $(OBJS) $(BONUS_OBJS) $(OBJSP) $(GNL_OBJS) $(P_OBJS)
	ar rcs $(NAME) libftprintf/libftprintf.a *.o

printf:
	cd libftprintf && make

$(GNL_OBJS):

$(P_OBJS):

.PHONY: clean printfclean fclean printfFclean re

clean: printfclean
	rm -f *.o

printfclean:
	cd libftprintf && make clean

fclean: clean printfFclean
	rm -f $(NAME)

printfFclean:
	cd libftprintf && make fclean

re: fclean all

bonus: $(OBJSB) 

$(OBJSB)

$(OBJSP):
