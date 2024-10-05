#==============================COLORS=============================================#

BOLD_BLACK		:= \033[1;30m
BOLD_RED		:= \033[1;31m
BOLD_GREEN		:= \033[1;32m
BOLD_YELLOW		:= \033[1;33m
BOLD_BLUE		:= \033[1;34m
BOLD_PURPLE		:= \033[1;35m
BOLD_CYAN		:= \033[1;36m
BOLD_WHITE		:= \033[1;37m
BLACK			:= \033[0;30m
RED				:= \033[0;31m
GREEN			:= \033[0;32m
YELLOW			:= \033[0;33m
BLUE			:= \033[0;34m
PURPLE			:= \033[0;35m
CYAN			:= \033[0;36m
WHITE			:= \033[0;37m
GRAY			:= \033[0;90m
LIGHT_RED		:= \033[0;91m
LIGHT_GREEN		:= \033[0;92m
LIGHT_YELLOW	:= \033[0;93m
LIGHT_BLUE		:= \033[0;94m
LIGHT_PURPLE	:= \033[0;95m
LIGHT_CYAN		:= \033[0;96m
LIGHT_WHITE		:= \033[0;97m
NO_COLOR		:= \033[0m
DEF_COLOR		:= \033[0;39m

#==============================VARIABLES=============================================#

SERVER		= server
SERVER_BONUS	= server_bonus
CLIENT		= client
CLIENT_BONUS = client_bonus
LIBFT		= $(LIBFT_DIR)libft.a

#===============================COMPILER============================================#

CC			= gcc
CFLAGS		= -Wextra -Werror -Wall -g3 -fsanitize=address
LDFLAGS		= -L$(LIBFT_DIR) -lft -lm -fsanitize=address
MKDIR		= mkdir -p
IFLAGS		= -I$(INC) -I$(LIBFT_INC)

#==============================DIRECTORIES=========================================#

SRCS_DIR		:= src/
BONUS_DIR		:= src/bonus/
OBJS_DIR		:= obj/
LIBFT_DIR		:= libft/
LIBFT_INC		:= $(LIBFT_DIR)inc/
INC				:= inc/

#==============================SOURCES============================================#

SRCS_SERVER_FILES := server
SRCS_CLIENT_FILES  := client
BONUS_SERVER_FILES := server_bonus
BONUS_CLIENT_FILES  := client_bonus

# ==============================FILES============================================#

SRCS_SERVER := $(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRCS_SERVER_FILES)))
SRCS_CLIENT := $(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRCS_CLIENT_FILES)))
BONUS_SRCS_SERVER := $(addprefix $(BONUS_DIR), $(addsuffix .c, $(BONUS_SERVER_FILES)))
BONUS_SRCS_CLIENT := $(addprefix $(BONUS_DIR), $(addsuffix .c, $(BONUS_CLIENT_FILES)))

OBJS_SERVER := $(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRCS_SERVER_FILES)))
OBJS_CLIENT := $(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRCS_CLIENT_FILES)))
BONUS_OBJS_SERVER := $(addprefix $(OBJS_DIR), $(addsuffix .o, $(BONUS_SERVER_FILES)))
BONUS_OBJS_CLIENT := $(addprefix $(OBJS_DIR), $(addsuffix .o, $(BONUS_CLIENT_FILES)))

DEPS_SERVER := $(addprefix $(OBJS_DIR), $(addsuffix .d, $(SRCS_SERVER_FILES)))
DEPS_CLIENT := $(addprefix $(OBJS_DIR), $(addsuffix .d, $(SRCS_CLIENT_FILES)))
BONUS_DEPS_SERVER := $(addprefix $(OBJS_DIR), $(addsuffix .d, $(BONUS_SERVER_FILES)))
BONUS_DEPS_CLIENT := $(addprefix $(OBJS_DIR), $(addsuffix .d, $(BONUS_CLIENT_FILES)))

#==============================RULES=============================================#

.PHONY: all clean fclean re bonus

all: $(SERVER) $(CLIENT)

bonus: $(SERVER_BONUS) $(CLIENT_BONUS)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c Makefile
	@$(MKDIR) $(dir $@)	
	@$(CC) $(CFLAGS) $(IFLAGS) -MP -MMD -c $< -o $@

$(OBJS_DIR)%.o: $(BONUS_DIR)%.c Makefile
	@$(MKDIR) $(dir $@)	
	@$(CC) $(CFLAGS) $(IFLAGS) -MP -MMD -c $< -o $@

$(SERVER): $(LIBFT) $(OBJS_SERVER)
	@$(CC) $(CFLAGS) $(OBJS_SERVER) $(LDFLAGS) -o $(SERVER)
	@echo "$(GREEN)[$(SERVER)] compiled!$(DEF_COLOR)"

$(CLIENT): $(LIBFT) $(OBJS_CLIENT)
	@$(CC) $(CFLAGS) $(OBJS_CLIENT) $(LDFLAGS) -o $(CLIENT)
	@echo "$(GREEN)[$(CLIENT)] compiled!$(DEF_COLOR)"

$(SERVER_BONUS): $(LIBFT) $(BONUS_OBJS_SERVER)
	@$(CC) $(CFLAGS) $(BONUS_OBJS_SERVER) $(LDFLAGS) -o $(SERVER_BONUS)
	@echo "$(CYAN)[$(SERVER_BONUS)] compiled!$(DEF_COLOR)"

$(CLIENT_BONUS): $(LIBFT) $(BONUS_OBJS_CLIENT)
	@$(CC) $(CFLAGS) $(BONUS_OBJS_CLIENT) $(LDFLAGS) -o $(CLIENT_BONUS)
	@echo "$(CYAN)[$(CLIENT_BONUS)] compiled!$(DEF_COLOR)"

$(LIBFT):
	@make -sC $(LIBFT_DIR)

clean:
	@$(RM) -rf $(OBJS_DIR)
	@make clean -sC $(LIBFT_DIR)
	@echo "$(BLUE)Object files cleaned!"

fclean: clean
	@$(RM) -rf $(SERVER) $(CLIENT) $(SERVER_BONUS) $(CLIENT_BONUS)
	@make fclean -sC $(LIBFT_DIR)
	@echo "$(CYAN)Executable files cleaned!"

re: fclean all

# Include dependencies
-include $(DEPS_SERVER)
-include $(DEPS_CLIENT)
-include $(BONUS_DEPS_SERVER)
-include $(BONUS_DEPS_CLIENT)

.SILENT: all clean fclean re bonus