# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/23 22:31:30 by mobenais          #+#    #+#              #
#    Updated: 2026/10/03 22:45:00 by tristan-gscn     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Output
NAME		= libft.a

# Commands
CC		= cc
CFLAGS		= -Wall -Wextra -Werror
DFLAGS		= -MMD -MP
AR		= ar -rcs
RM		= rm -rf
MKDIR		= mkdir -p

# Directories
INCDIR		= include
SRCDIR		= src
MANDATORY_DIR	= $(SRCDIR)/mandatory
BONUS_DIR	= $(SRCDIR)/bonus
OBJDIR		= .obj
DEPDIR		= .dep

IFLAGS		= -I$(INCDIR)
CF		= $(CC) $(CFLAGS) $(DFLAGS) $(IFLAGS)

# Sources
MANDATORY_SRCS	= ft_atoi.c \
		  ft_bzero.c \
		  ft_calloc.c \
		  ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_isprint.c \
		  ft_itoa.c \
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
		  ft_striteri.c \
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
		  ft_toupper.c

BONUS_SRCS	= ft_lstadd_back_bonus.c \
		  ft_lstadd_front_bonus.c \
		  ft_lstclear_bonus.c \
		  ft_lstdelone_bonus.c \
		  ft_lstiter_bonus.c \
		  ft_lstlast_bonus.c \
		  ft_lstmap_bonus.c \
		  ft_lstnew_bonus.c \
		  ft_lstsize_bonus.c

# Objects and Dependencies
MANDATORY_OBJS	= $(addprefix $(OBJDIR)/mandatory/, $(MANDATORY_SRCS:.c=.o))
MANDATORY_DEPS	= $(addprefix $(DEPDIR)/mandatory/, $(MANDATORY_SRCS:.c=.d))

BONUS_OBJS	= $(addprefix $(OBJDIR)/bonus/, $(BONUS_SRCS:.c=.o))
BONUS_DEPS	= $(addprefix $(DEPDIR)/bonus/, $(BONUS_SRCS:.c=.d))

# Rules
all: $(NAME)

$(NAME): $(MANDATORY_OBJS)
	$(AR) $@ $^

bonus: $(OBJDIR)/.bonus

$(OBJDIR)/.bonus: $(MANDATORY_OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $^
	@touch $@

$(OBJDIR)/mandatory/%.o: $(MANDATORY_DIR)/%.c | $(OBJDIR)/mandatory $(DEPDIR)/mandatory
	$(CF) -MF $(DEPDIR)/mandatory/$*.d -c $< -o $@

$(OBJDIR)/bonus/%.o: $(BONUS_DIR)/%.c | $(OBJDIR)/bonus $(DEPDIR)/bonus
	$(CF) -MF $(DEPDIR)/bonus/$*.d -c $< -o $@

$(OBJDIR)/mandatory $(OBJDIR)/bonus $(DEPDIR)/mandatory $(DEPDIR)/bonus:
	$(MKDIR) $@

clean:
	$(RM) $(OBJDIR) $(DEPDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

-include $(MANDATORY_DEPS)
-include $(BONUS_DEPS)
