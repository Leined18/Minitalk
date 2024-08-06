#*********** Commands ***********#

CC = gcc
CFLAGS = -Wextra -Werror -Wall -g3 -fsanitize=address
LDFLAGS	= -L$(LIBFT_DIR) -lft -lm -fsanitize=address
RM = rm -rf
MKDIR = mkdir -p

#********** Directories *********#

LIBFT_DIR = libft
OBJ_DIR = obj
SERVER_DIR = server
CLIENT_DIR = client

#************ Names *************#

LIBFT = $(LIBFT_DIR)/libft.a
NAME1 = $(SERVER_DIR)/server
NAME2 = $(CLIENT_DIR)/client

#*********** Sources ************#

SRCS1 = $(SERVER_DIR)/src/server.c
SRCS2 = $(CLIENT_DIR)/src/client.c

#*********** Objects ************#

OBJS1 = $(SRCS1:$(SERVER_DIR)/src/%.c=$(SERVER_DIR)/$(OBJ_DIR)/%.o)
OBJS2 = $(SRCS2:$(CLIENT_DIR)/src/%.c=$(CLIENT_DIR)/$(OBJ_DIR)/%.o)

#********** Includes ************#

LIBFT_INC = -I$(LIBFT_DIR)/inc
INC1 = -I$(SERVER_DIR)/inc
INC2 = -I$(CLIENT_DIR)/inc

#************ Rules *************#

all: $(NAME1) $(NAME2)

$(NAME1): $(LIBFT) $(OBJS1)
	@$(CC) -o $(NAME1) $(LIBFT) $(OBJS1) $(LDFLAGS)
	@echo "\033[0;32m$(NAME1) has been created.\033[0m"

$(NAME2): $(LIBFT) $(OBJS2)
	@$(CC) -o $(NAME2) $(LIBFT) $(OBJS2) $(LDFLAGS)
	@echo "\033[0;32m$(NAME2) has been created.\033[0m"

$(SERVER_DIR)/$(OBJ_DIR)/%.o: $(SERVER_DIR)/src/%.c
	@$(MKDIR) $(@D)
	@$(CC) $(CFLAGS) $(INC1) $(LIBFT_INC)  -c $< -o $@

$(CLIENT_DIR)/$(OBJ_DIR)/%.o: $(CLIENT_DIR)/src/%.c
	@$(MKDIR) $(@D)
	@$(CC) $(CFLAGS) $(INC2) $(LIBFT_INC)  -c $< -o $@

$(LIBFT):
	@make -sC $(LIBFT_DIR)

clean:
	@$(RM) $(SERVER_DIR)/$(OBJ_DIR)
	@$(RM) $(CLIENT_DIR)/$(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME1)
	@$(RM) $(NAME2)
	@make -sC $(LIBFT_DIR) fclean

re: fclean all
