# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 21:48:22 by mbelalou          #+#    #+#              #
#    Updated: 2018/05/19 20:15:32 by mbelalou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_C			= checker
NAME_P			= pushswap

FLAGES			= -Wall -Wextra -Werror -c

DIR_TEST		= src/test_menu
SRC_TEST		= ft_add_menu.c ft_shift_down_menu.c ft_dell_menu.c \
				  ft_shift_down_two_list.c ft_init_menu.c ft_shift_up_menu.c\
				  ft_print_head.c ft_shift_up_tow_list_menu.c ft_print_menu.c\
				  ft_swap_menu.c ft_push_menu.c ft_swap_two_list.c\
				  ft_search_menu.c main_debug.c
SRCS_TEST		= $(addprefix $(DIR_TEST)/, $(SRC_TEST))

DIR_PARSING		= src/parsing
SRC_PARSING		= ft_add_end_values_in_list.c ft_is_param_valid.c\
				  ft_extract_options.c ft_is_valid_int_tab.c
SRCS_PARSING	= $(addprefix $(DIR_PARSING)/, $(SRC_PARSING))

DIR_MESSAGE		= src/message
SRC_MESSAGE		= ft_end_msg_check.c ft_print_error.c ft_print_usage.c\
				  ft_invalide_parametre.c ft_print_error_detail.c ft_tel_ko.c\
				  ft_print_action.c ft_print_help.c ft_tel_ok.c
SRCS_MAESSAGE	= $(addprefix $(DIR_MESSAGE)/, $(SRC_MESSAGE))

DIR_CHECKER		= src/checker_dir
SRC_CHECKER		= ft_run_ckecker.c main_checker.c ft_get_id_action.c\
				  ft_init_action_name.c ft_get_index_action.c\
				  ft_init_action_tab.c
SRCS_CHECKER	= $(addprefix $(DIR_CHECKER)/, $(SRC_CHECKER))

DIR_PUSH_SWAP	= src/push_swap
SRC_PUSH_SWAP	= main_push_swap.c
SRCS_PUSH_SWAP	= $(addprefix $(DIR_PUSH_SWAP)/, $(SRC_PUSH_SWAP))

INC_DIR		= inc/

OBJS_DIR	= bin/

LIBFT_DIR	= ../libft

LIBFT		= libft.a

SRCS_C		= $(SRCS_TEST) $(SRCS_PARSING) $(SRCS_MAESSAGE) $(SRCS_CHECKER)
SRCS_P		= $(SRCS_TEST) $(SRCS_PARSING) $(SRCS_MAESSAGE) $(SRCS_PUSH_SWAP)\
			  $(DIR_CHECKER)/ft_init_action_name.c

RED			= \x1b[31m
GREEN		= \x1b[32m
YELLO		= \x1b[33m
WHITE		= \x1b[37m
BIP			= \a

all				: $(LIBFT) $(NAME_C) $(NAME_P)

$(NAME_C)		: $(SRCS_C) $(OBJS_DIR)
		@gcc $(SRCS_C) -L $(LIBFT_DIR) -lft -o $(NAME_C)
		@echo "$(GREEN)$(NAME_C) has been successfully created !$(WHITE)."
		@say "$(NAME_C) has been successfully created !"
		@#		@echo $(SRCS)

$(NAME_P)		: $(SRCS_P) $(OBJS_DIR)
		@gcc $(SRCS_P) -L $(LIBFT_DIR) -lft -o $(NAME_P)
		@echo "$(GREEN)$(NAME_P) has been successfully created !$(WHITE)."
		@say "$(NAME_P) has been successfully created !"

$(LIBFT)		:
		@make -C $(LIBFT_DIR)

$(OBJS_DIR)%.o	: %.c $(INC_DIR)
		@gcc $(FLAGES) $< -o $@ -I $(INC_DIR)

$(OBJS_DIR)		:
		@mkdir -p $(OBJS_DIR);
		@mkdir -p $(OBJS_DIR)/$(DIR_TEST);
		@mkdir -p $(OBJS_DIR)/$(DIR_PARSING);
		@mkdir -p $(OBJS_DIR)/$(DIR_MESSAGE);
		@mkdir -p $(OBJS_DIR)/$(DIR_CHECKER);

clean			:
		@make -C $(LIBFT_DIR) clean
		@rm -fr $(OBJS_DIR)
		@echo "$(RED)cleaned the checker binary files$(WHITE)."
		@say "cleaned the checker binary files."

fclean			:
		@make -C $(LIBFT_DIR) fclean
		@rm -fr $(OBJS_DIR)
		@rm -f $(NAME_C)
		@rm -f $(NAME_P)
		@echo "$(RED)cleaned the $(NAME) file$(WHITE)."
		@echo "$(GREEN)the $(NAME_C) directory is totaly cleaned !!$(WHITE)."
		@echo "$(GREEN)the $(NAME_P) directory is totaly cleaned !!$(WHITE)."
		@say "the $(NAME_P) and $(NAME_C) directory is totaly cleaned !"

re				: fclean all

norm 			:
	@norminette | grep -B 1 "Error"

.PHONY : all clean fclean re
