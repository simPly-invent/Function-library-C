# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/23 22:31:30 by mobenais          #+#    #+#              #
#    Updated: 2025/11/11 15:19:51 by mobenais         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

AR		= ar -rcs
RM		= rm -rf

CC		= cc
CFLAGS	= -Wextra -Werror -Wall

SRCDIR	= srcs
OBJDIR	= .obj
INCDIR	= include

BONUS	= ft_lstadd_front.c \
		  ft_lstlast_bonus.c \
		  ft_lstnew_bonus.c \
		  ft_lstsize_bonus.c \
		  ft_lstadd_back_bonus.c \
		  ft_lstdelone_bonus.c \
		  ft_lstclear_bonus.c \
		  ft_lstiter_bonus.c \
		  ft_lstmap_bonus.c



SRC = ft_atoi.c\
      ft_bzero.c\
      ft_calloc.c\
      ft_isalnum.c\
      ft_isalpha.c\
      ft_isascii.c\
      ft_isdigit.c\
      ft_isprint.c\
      ft_itoa.c\
      ft_memccpy.c\
      ft_memchr.c\
      ft_memcmp.c\
      ft_memcpy.c\
      ft_memmove.c\
      ft_memset.c\
      ft_putchar_fd.c\
      ft_putendl_fd.c\
      ft_putnbr_fd.c\
      ft_putstr_fd.c\
      ft_split.c\
      ft_strchr.c\
      ft_strdup.c\
      ft_strjoin.c\
      ft_strlcat.c\
      ft_strlcpy.c\
      ft_strlen.c\
      ft_strmapi.c\
      ft_strncmp.c\
      ft_strnstr.c\
      ft_strrchr.c\
      ft_strtrim.c\
      ft_substr.c\
      ft_tolower.c\
      ft_toupper.c\
      ft_striteri.c



OBJ = $(addprefix $(OBJDIR)/, $(notdir $(SRC:.c=.o)))

DEPSOBJ = $(addprefix $(OBJDIR)/, $(SRC:.c=.d))

NAME = libft.a

all: $(NAME)

$(NAME):$(OBJ)
	$(AR) $@ $^

$(OBJDIR)/%.o:%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -MMD -MP -I$(INCDIR) -c $< -o $@

$(OBJDIR):
	mkdir $(OBJDIR)
bonus: 
	$(MAKE) SRC="$(SRC) $(BONUS)"
clean:
	$(RM) $(OBJDIR)
fclean:clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re

-include $(DEPSOBJ)
