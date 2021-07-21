# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: JEAN-SEBA <jcourtem@student.42quebec>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/26 10:27:53 by JEAN-SEBA         #+#    #+#              #
#    Updated: 2021/07/21 16:57:40 by JEAN-SEBA        ###   ########.fr        #
#    Updated: 2021/07/08 14:00:04 by JEAN-SEBA        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc -Wextra -Wall -Werror -g 
NAME	= libft.a
FILES	= ft_memset.c \
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

OBJS = $(FILES:.c=.o)

BONUSF = ft_islower.c \
			  ft_isupper.c \
			  ft_lstnew.c \
			  ft_lstadd_front.c \
			  ft_lstsize.c \
			  ft_lstlast.c \
			  ft_lstadd_back.c \
			  ft_lstdelone.c \
			  ft_lstclear.c \
			  ft_lstiter.c \
			  ft_lstmap.c 
		   		
OBJSB = $(BONUSF:.c=.o)

all: bonus $(NAME)

$(NAME): $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJSB) 

$(OBJSB):
