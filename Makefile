# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/23 22:31:30 by mobenais          #+#    #+#              #
#    Updated: 2026/10/04 00:28:00 by tristan-gscn     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Output
NAME		= libft.a


# Commands
AR		= ar -rcs
RM		= rm -rf


# Flags

CC		= cc
CFLAGS		= -Wextra -Werror -Wall
DFLAGS		= -MMD -MP -MF $(DEPDIR)/$*.d
IFLAGS		= -I$(INCDIR)

CF		= $(CC) $(CFLAGS) $(DFLAGS) $(IFLAGS)


# Directories

OBJDIR		= .obj
DEPDIR		= .dep
INCDIR		= include
SRCDIR		= src


# Sources

SRCS		:= ft_atoi.c \
		  ft_bzero.c \
		  ft_calloc.c \
		  ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_isprint.c \
		  ft_itoa.c \
		  ft_lstadd_back.c \
		  ft_lstadd_front.c \
		  ft_lstclear.c \
		  ft_lstdelone.c \
		  ft_lstiter.c \
		  ft_lstlast.c \
		  ft_lstmap.c \
		  ft_lstnew.c \
		  ft_lstsize.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_memset.c \
		  ft_putchar_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  ft_putstr_fd.c \
		  ft_split.c \
		  ft_strchr.c \
		  ft_strdup.c \
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
		  ft_tolower.c \
		  ft_toupper.c \
		  ft_striteri.c


OBJS		= $(addprefix $(OBJDIR)/, $(notdir $(SRCS:.c=.o)))
DEPS		= $(addprefix $(DEPDIR)/, $(notdir $(SRCS:.c=.d)))


all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR) $(DEPDIR)
	$(CF) -c $< -o $@

$(OBJDIR) $(DEPDIR):
	mkdir -p $@

clean:
	$(RM) $(OBJDIR) $(DEPDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include $(DEPS)
