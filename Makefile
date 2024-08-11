#*********** Commands ***********#

CC = gcc
CFLAGS = -Wextra -Werror -Wall -g3 -fsanitize=address
LDFLAGS	= -L$(LIBFT_DIR) -lft -lm -fsanitize=address
RM = rm -rf
MKDIR = mkdir -p

#********** Directories *********#

SRCS_DIR = src
INC_DIR = inc
LIBFT_DIR = libft
OBJ_DIR = obj

#************ Names *************#

LIBFT = $(LIBFT_DIR)/libft.a
NAME1 = server
NAME2 = client

#*********** Sources ************#

SRCS1 = $(SRCS_DIR)/server.c
SRCS2 = $(SRCS_DIR)/client.c

#*********** Objects ************#

OBJS1 = $(SRCS1:$(SRCS_DIR)/%.c=$(SRCS_DIR)/$(OBJ_DIR)/%.o)
OBJS2 = $(SRCS2:$(SRCS_DIR)/%.c=$(SRCS_DIR)/$(OBJ_DIR)/%.o)

#********** Includes ************#

LIBFT_INC	= -I$(LIBFT_DIR)/inc
INC			= -I$(INC_DIR)

#************ Rules *************#

all: $(NAME1) $(NAME2)

$(NAME1): $(LIBFT) $(OBJS1)
	@$(CC) -o $(NAME1) $(LIBFT) $(OBJS1) $(LDFLAGS)
	@echo "\033[0;32m$(NAME1) has been created.\033[0m"

$(NAME2): $(LIBFT) $(OBJS2)
	@$(CC) -o $(NAME2) $(LIBFT) $(OBJS2) $(LDFLAGS)
	@echo "\033[0;32m$(NAME2) has been created.\033[0m"

$(SRCS_DIR)/$(OBJ_DIR)/%.o: $(SRCS_DIR)/%.c
	@$(MKDIR) $(@D)
	@$(CC) $(CFLAGS) $(INC) $(LIBFT_INC)  -c $< -o $@

$(SRCS_DIR)/$(OBJ_DIR)/%.o: $(SRCS_DIR)/%.c
	@$(MKDIR) $(@D)
	@$(CC) $(CFLAGS) $(INC) $(LIBFT_INC)  -c $< -o $@

$(LIBFT):
	@make -sC $(LIBFT_DIR)

clean:
	@$(RM) $(SRCS_DIR)/$(OBJ_DIR)
	@$(RM) $(SRCS_DIR)/$(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME1)
	@$(RM) $(NAME2)
	@make -sC $(LIBFT_DIR) fclean

re: fclean all
