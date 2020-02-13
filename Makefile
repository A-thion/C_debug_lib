# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: athion <athion@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/08 15:06:26 by athion            #+#    #+#              #
#    Updated: 2020/02/13 03:58:43 by athion           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


## PIMPED MAKEFILE ##

# COLORS #

# This is a minimal set of ANSI/VT100 color codes
_END		=	\x1b[0m
_BOLD		=	\x1b[1m
_UNDER		=	\x1b[4m
_REV		=	\x1b[7m

# Colors
_GREY		=	\x1b[30m
_RED		=	\x1b[31m
_GREEN		=	\x1b[32m
_YELLOW		=	\x1b[33m
_BLUE		=	\x1b[34m
_PURPLE		=	\x1b[35m
_CYAN		=	\x1b[36m
_WHITE		=	\x1b[37m

# Inverted, i.e. colored backgrounds
_IGREY		=	\x1b[40m
_IRED		=	\x1b[41m
_IGREEN		=	\x1b[42m
_IYELLOW	=	\x1b[43m
_IBLUE		=	\x1b[44m
_IPURPLE	=	\x1b[45m
_ICYAN		=	\x1b[46m
_IWHITE		=	\x1b[47m

# **************************************************************************** #

## VARIABLES ##

# COMPILATION #

CC			=	gcc

CC_FLAGS	=	-Wall -Wextra -Werror


# DELETE #

RM			=	rm -rf


# DIRECTORIES #

DIR_HEADERS =	./includes/

DIR_SRCS	=	./srcs/

DIR_OBJS	=	./compiled_srcs/

DIR_UTILS	=	utils/


# FILES #

SRC			=	debug.c\
				utils/put_hexa.c\
				utils/put_nbr.c\
				utils/put_str.c\
				utils/put_char.c\
				utils/itoa_base.c\
				utils/is_printable.c

DEBUG_FILE	=	main.c

SRCS		=	$(SRC)

DEBUG_FILES	=	$(DEBUG_FILE)


# COMPILED_SOURCES #

OBJS 		=	$(SRCS:%.c=$(DIR_OBJS)%.o)

DEBUG_OBJS	=	$(DEBUG_FILES:%.c=$(DIR_OBJS)%.o)

NAME 		=	debug


# **************************************************************************** #

## RULES ##

# VARIABLES RULES #

$(NAME):		$(OBJS)
				@echo "$(_GREEN) All files compiled into '$(DIR_OBJS)'. $(_END)✅"
				@ar rc $(NAME) $(OBJS)
				@ranlib $(NAME)
				@echo "$(_GREEN) Executable '$(NAME)' created. $(_END)✅"

# COMPILED_SOURCES RULES #

$(OBJS):		| $(DIR_OBJS)

$(DEBUG_OBJS):	| $(DIR_OBJS)

$(DIR_OBJS)%.o: $(DIR_SRCS)%.c
				@$(CC) $(CC_FLAGS) -I $(DIR_HEADERS) -c $< -o $@

$(DIR_OBJS):
				@mkdir $(DIR_OBJS)
				@mkdir $(DIR_OBJS)$(DIR_UTILS)


# OBLIGATORY PART #

all:			$(NAME)

dev:			$(OBJS) $(DEBUG_OBJS)
				@$(CC) $(CC_FLAGS) -I $(DIR_HEADERS) $(OBJS) $(DEBUG_OBJS) -o $(NAME)

clean:
				@$(RM) $(DIR_OBJS)
				@echo "$(_RED)'"$(DIR_OBJS)"' has been deleted. $(_END)🗑️"

fclean:			clean
				@$(RM) $(NAME)
				@echo "$(_RED)'"$(NAME)"' has been deleted. $(_END)🗑️"

re:				fclean all

# NORME #

norm:
				norminette $(DIR_SRCS)
				norminette $(DIR_HEADERS)

# BONUS #

bonus:			all

re_bonus:		fclean bonus

# PHONY #

.PHONY:			all, clean, fclean, re, bonus, re_bonus
