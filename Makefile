# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtraball <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/26 12:15:15 by mtraball          #+#    #+#              #
#    Updated: 2021/01/26 12:15:19 by mtraball         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
LIB 	= ar -rcs
RM		= /bin/rm -f

NAME	= libft.a

INCLUDE	= libft.h
SRCS	= ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strdup.c \
		  			  ft_memchr.c ft_memcmp.c ft_memccpy.c ft_atoi.c \
					  ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
					  ft_isdigit.c ft_isprint.c ft_memmove.c ft_strchr.c \
					  ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c\
					  ft_strrchr.c ft_tolower.c ft_toupper.c ft_putchar_fd.c\
					  ft_putstr_fd.c ft_strnstr.c ft_substr.c ft_putnbr_fd.c

SRCS_B	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		              ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS	= $(SRCS:.c=.o)
OBJS_B	= $(SRCS_B:.c=.o)
	 
all:		$(NAME)

bonus:		$(NAME) $(OBJS_B)
			${LIB} $(NAME) $(OBJS_B)

$(NAME):	$(OBJS) $(INCLUDE)
			$(LIB) $(NAME) $(OBJS)

.c.o:
			$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS) $(OBJS_B)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus
