# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 16:56:35 by danpalac          #+#    #+#              #
#    Updated: 2024/08/12 11:55:34 by danpalac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==========COLOURS=============================================================#

# Basic Colors

BLACK       = \033[0;30m
RED         = \033[0;31m
GREEN       = \033[0;32m
YELLOW      = \033[0;33m
BLUE        = \033[0;34m
MAGENTA     = \033[0;35m
CYAN        = \033[0;36m
WHITE       = \033[0;37m

# Bright Colors

BOLD_BLACK  = \033[1;30m
BOLD_RED    = \033[1;31m
BOLD_GREEN  = \033[1;32m
BOLD_YELLOW = \033[1;33m
BOLD_BLUE   = \033[1;34m
BOLD_MAGENTA= \033[1;35m
BOLD_CYAN   = \033[1;36m
BOLD_WHITE  = \033[1;37m

# Extended Colors (256 colors)
ORANGE      = \033[38;5;208m
WINE        = \033[38;5;88m
LIME        = \033[38;5;190m
TURQUOISE   = \033[38;5;38m
LIGHT_PINK  = \033[38;5;13m
DARK_GRAY   = \033[38;5;235m
LIGHT_RED   = \033[38;5;203m
LIGHT_BLUE  = \033[38;5;75m


# Reseteo de color
NO_COLOR    = \033[0m
DEF_COLOR   = \033[0;39m
CLEAR_LINE  = \033[2K
MOVE_UP     = \033[1A

#==========NAMES===============================================================#

NAME		:= libft.a

#==========COMMANDS============================================================#

CC			:= gcc
CFLAGS		:= -Wall -Wextra -Werror -g3
RM			:= rm -rf
AR			:= ar rcs
LIB			:= ranlib
MKDIR 		:= mkdir -p


##==========DIRECTORIES=======================================================#

INCLUDES := inc/
SRC_DIR := srcs/
OBJ_DIR := obj/

IS_DIR := is/
LST_DIR := lst/
MEM_DIR := mem/
PUT_DIR := put/
STR_DIR := str/
TO_DIR := to/
PRINTF_DIR := printf/
PRINTF_PUT_DIR := printf/put/
MATH_DIR := math/
GET_DIR := get/


#==========SOURCES============================================================#


IS_FILES	:= ft_isalpha ft_isalnum ft_isascii ft_isdigit ft_isprint ft_isspace ft_isndup

MEM_FILES	:= ft_bzero ft_calloc ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset\
			   ft_memrev ft_memccpy ft_memdel
			   
PUT_FILES	:= ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd ft_error ft_successful

TO_FILES	:= ft_atoi ft_itoa ft_atol ft_atoll ft_tolower ft_toupper ft_bin2char ft_char2bin ft_bintostr ft_strtobin

STR_FILES	:= ft_split ft_strchr ft_strdup ft_striteri ft_strjoin ft_strlcat ft_strlcpy ft_strlen ft_strmapi ft_strncmp \
			ft_strnstr ft_strrchr ft_strtrim ft_strrev ft_substr ft_strrncmp ft_strtok

LST_FILES	:= ft_lstnew_bonus ft_lstadd_front_bonus ft_lstsize_bonus ft_lstlast_bonus ft_lstadd_back_bonus \
		  	ft_lstdelone_bonus ft_lstclear_bonus ft_lstiter_bonus ft_lstmap_bonus
			
PRINTF_FILES	:= ft_printf

PRINTF_PUT_FILES := ft_putaddr ft_putbase_fd ft_putchar ft_puthexa ft_putnbr ft_putstr ft_putunsigned

MATH_FILES	:= ft_abs ft_index ft_insort ft_sqrt ft_fib ft_fact 

GET_FILES := get_next_line

#==========FILES###===========================================================#

SRC_FILES+=$(addprefix $(IS_DIR), $(IS_FILES))
SRC_FILES+=$(addprefix $(MEM_DIR), $(MEM_FILES))
SRC_FILES+=$(addprefix $(PUT_DIR), $(PUT_FILES))
SRC_FILES+=$(addprefix $(TO_DIR), $(TO_FILES))
SRC_FILES+=$(addprefix $(STR_DIR), $(STR_FILES))
SRC_FILES+=$(addprefix $(LST_DIR), $(LST_FILES))
SRC_FILES+=$(addprefix $(PRINTF_DIR), $(PRINTF_FILES))
SRC_FILES+=$(addprefix $(PRINTF_PUT_DIR), $(PRINTF_PUT_FILES))
SRC_FILES+=$(addprefix $(MATH_DIR), $(MATH_FILES))
SRC_FILES+=$(addprefix $(GET_DIR), $(GET_FILES))

SRCS := $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS := $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
DEPS := $(addprefix $(OBJ_DIR), $(addsuffix .d, $(SRC_FILES)))

#==========RULES==============================================================#

all: $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c Makefile
	@mkdir -p $(dir $@)
	@printf "%b" "$(BOLD_CYAN)[LIBFT]:\t$(DEF_COLOR)$(BOLD_GREEN)$<$(DEF_COLOR)\r"
	@$(CC) $(CFLAGS) -I$(INCLUDES) -MMD -MP -c $< -o $@
	@printf "%b" "$(BOLD_BLUE)$(DEF_COLOR)\r"

$(NAME) : $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@printf "%b" "$(BOLD_BLUE)$(DEF_COLOR)"
	@printf "%b" "$(CLEAR_LINE)$(BOLD_CYAN)Compilation complete!$(DEF_COLOR)\n"

clean: 
	@$(RM) -rf $(OBJ_DIR) a.out
	@printf "%b" "$(BLUE)[LIBFT]:\tobject files$(DEF_COLOR)$(GREEN)  => Cleaned!$(DEF_COLOR)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "%b" "$(CYAN)[LIBFT]:\texec. files$(DEF_COLOR)$(GREEN)  => Cleaned!$(DEF_COLOR)\n"

re: fclean all

norm:
	@norminette $(SRC) $(INCLUDE) | grep -v Norme -B1 || true

-include $(DEPS)

.PHONY: all clean fclean re norm
