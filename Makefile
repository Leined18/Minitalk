#*********** Commands ***********#

CC = gcc
CFLAGS = -Wextra -Werror -Wall -g3 -fsanitize=address
LDFLAGS = -fsanitize=address
RM = rm -rf
MKDIR = mkdir -p

#********** Directories *********#

OBJ_DIR = obj
SERVER_DIR = server
CLIENT_DIR = client

#************ Names *************#

NAME1 = $(SERVER_DIR)/server
NAME2 = $(CLIENT_DIR)/client

#*********** Sources ************#

SRCS1 = $(SERVER_DIR)/src/main.c
SRCS2 = $(CLIENT_DIR)/src/main.c

#*********** Objects ************#

OBJS1 = $(SRCS1:$(SERVER_DIR)/src/%.c=$(SERVER_DIR)/$(OBJ_DIR)/%.o)
OBJS2 = $(SRCS2:$(CLIENT_DIR)/src/%.c=$(CLIENT_DIR)/$(OBJ_DIR)/%.o)

#********** Includes ************#

INC1 = -I$(SERVER_DIR)/inc
INC2 = -I$(CLIENT_DIR)/inc

#************ Rules *************#

all: $(NAME1) $(NAME2)

$(NAME1): $(OBJS1)
	@$(CC) -o $(NAME1) $(OBJS1) $(LDFLAGS)
	@echo "\033[0;32m$(NAME1) has been created.\033[0m"

$(NAME2): $(OBJS2)
	@$(CC) -o $(NAME2) $(OBJS2) $(LDFLAGS)
	@echo "\033[0;32m$(NAME2) has been created.\033[0m"

$(SERVER_DIR)/$(OBJ_DIR)/%.o: $(SERVER_DIR)/src/%.c
	@$(MKDIR) $(@D)
	@$(CC) $(CFLAGS) $(INC1) -c $< -o $@

$(CLIENT_DIR)/$(OBJ_DIR)/%.o: $(CLIENT_DIR)/src/%.c
	@$(MKDIR) $(@D)
	@$(CC) $(CFLAGS) $(INC2) -c $< -o $@

clean:
	@$(RM) $(SERVER_DIR)/$(OBJ_DIR)
	@$(RM) $(CLIENT_DIR)/$(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME1)
	@$(RM) $(NAME2)

re: fclean all
