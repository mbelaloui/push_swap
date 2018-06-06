# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 21:48:22 by mbelalou          #+#    #+#              #
#    Updated: 2018/06/05 12:45:00 by mbelalou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

FLAGES		= -Wall -Wextra -Werror -c

DIR_CHAR	= char
SRC_CHAR	= ft_chartoint.c ft_isascii.c ft_islower.c ft_putchar.c ft_toupper.c\
			  ft_isalnum.c ft_isblank.c ft_isprint.c ft_putchar_fd.c\
			  ft_isalpha.c ft_isdigit.c ft_isupper.c ft_tolower.c
SRCS_CHAR	= $(addprefix $(DIR_CHAR)/, $(SRC_CHAR))

DIR_FILE	= file
SRC_FILE	= ft_open_file.c get_next_line.c
SRCS_FILE	= $(addprefix $(DIR_FILE)/, $(SRC_FILE))

DIR_INTLIST	= intlist
SRC_INTLIST	= ft_add_bgn_intlist.c ft_add_end_intlist.c ft_avg_intlist.c\
			  ft_clear_intlist.c ft_dell_bgn_int_list.c ft_dell_end_int_list.c\
			  ft_getnbr_found_elem_int_list.c ft_get_val_intlist.c\
			  ft_intervert_head_int_list.c ft_intervert_head_tow_int_list.c\
			  ft_is_empty_int_list.c ft_is_in_int_list.c\
			  ft_is_sorted_asc_int_list.c ft_is_sorted_des_int_list.c\
			  ft_max_int_list.c ft_min_int_list.c ft_new_intlist.c\
			  ft_push_first_to_list.c ft_put_int_list.c ft_put_tow_piles.c\
			  ft_shift_bottom_int_list.c ft_shift_bottom_tow_int_list.c\
			  ft_shift_top_int_list.c ft_shift_top_tow_int_list.c\
			  ft_size_intlist.c ft_add_elem_int_list.c\
			  ft_bubble_sort_int_list.c ft_dell_elem_int_list.c\
			  ft_dell_index_int_list.c ft_tab_to_int_list.c\
			  ft_mergesort_int_list.c ft_med_int_list.c\
			  ft_get_index_min_int_list.c ft_get_index_max_int_list.c\
			  ft_get_index_first_elem_bigger_intlist.c\
			  ft_get_index_last_elem_bigger_intlist.c ft_get_pivot.c
SRCS_INTLIST= $(addprefix $(DIR_INTLIST)/, $(SRC_INTLIST))

DIR_LST		= lst
SRC_LST		= ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c\
			  ft_lstnew.c
SRCS_LST	= $(addprefix $(DIR_LST)/, $(SRC_LST))

DIR_MAT		= mat
SRC_MAT		= ft_free_mat.c ft_matlen.c   ft_putmat.c ft_mat_to_str.c
SRCS_MAT	= $(addprefix $(DIR_MAT)/, $(SRC_MAT))

DIR_MEM		= mem
SRC_MEM		= ft_bzero.c ft_memccpy.c ft_memcmp.c ft_memdel.c ft_memset.c\
			  ft_memalloc.c ft_memchr.c ft_memcpy.c ft_memmove.c
SRCS_MEM	= $(addprefix $(DIR_MEM)/, $(SRC_MEM))

DIR_NBR		= nbr
SRC_NBR		= ft_abs.c ft_decimal_to_base_stat.c ft_max.c ft_atoi.c\
			  ft_get_char_base.c ft_min.c ft_atoi_v1.c ft_get_len_value_base.c\
			  ft_nbrlen.c ft_atoi_v2.c ft_get_len_value_ubase.c ft_putnbr.c\
			  ft_base_to_decimal.c ft_get_mask.c ft_putnbr_fd.c\
			  ft_base_to_decimal_v2.c ft_intochar.c ft_udecimal_to_base_stat.c\
			  ft_decimal_to_base_dynm.c ft_is_elem_base.c ft_unbrlen.c\
			  ft_is_overflow_intmax.c ft_atointmax.c ft_swap_int.c
SRCS_NBR	= $(addprefix $(DIR_NBR)/, $(SRC_NBR))

DIR_STR		= str
SRC_STR		= ft_comptword.c ft_putendl_fd.c ft_strequ.c ft_strnequ.c\
			  ft_fill_elem.c ft_putstr.c ft_striter.c ft_strnew.c\
			  ft_getfirstindexword.c ft_putstr_fd.c ft_striteri.c\
			  ft_strnew_empty.c ft_getlenword.c ft_strcat.c ft_strjoin.c\
			  ft_strnstr.c ft_gettab_index.c ft_strchr.c ft_strlcat.c\
			  ft_strrchr.c ft_gettab_val.c ft_strclr.c ft_strlen.c\
			  ft_strsplit.c ft_getword.c ft_strcmp.c ft_strlower.c ft_strstr.c\
			  ft_is_c_in_str.c ft_strcpy.c ft_strmap.c ft_strsub.c ft_isempty.c\
			  ft_strcut.c ft_strmapi.c ft_strtrim.c ft_itoa.c ft_strdel.c\
			  ft_strncat.c ft_strupper.c ft_put_buf.c ft_strdup.c ft_strncmp.c\
			  ft_putendl.c ft_strdup_stat.c ft_strncpy.c ft_format_str.c\
			  ft_strjoin_clean.c
SRCS_STR	= $(addprefix $(DIR_STR)/, $(SRC_STR))

DIR_SYS		= sys
SRC_SYS		= ft_temporize.c ft_clear_scr.c
SRCS_SYS	= $(addprefix $(DIR_SYS)/, $(SRC_SYS))

DIR_WCHAR	= wchar
SRC_WCHAR	= ft_putwstr.c ft_wcharlen.c ft_wstrlen.c ft_wchar_to_string.c\
			  ft_wstringlen.c
SRCS_WCHAR	= $(addprefix $(DIR_WCHAR)/, $(SRC_WCHAR))

DIR_TAB		= tab
SRC_TAB		= ft_put_intmax_tab.c ft_bubble_sort_tab.c ft_mergesort_tab.c\
			  ft_int_list_to_tab.c ft_avg_tab.c ft_intmax_list_to_tab.c\
			  ft_med_tab.c
SRCS_TAB	= $(addprefix $(DIR_TAB)/, $(SRC_TAB))

DIR_CHARLST	= charlist
SRC_CHARLST	= ft_add_charlist.c ft_dell_charlist.c ft_dell_list_charlist.c\
			  ft_new_charlist.c ft_put_charlist.c ft_isempty_charlist.c\
			  ft_put_list_charlist.c ft_size_charlist.c
SRCS_CHARLST	= $(addprefix $(DIR_CHARLST)/, $(SRC_CHARLST))

INC_DIR		= inc/

OBJS_DIR	= bin/

PRINTF_DIR	= src/printf

PRINTF		= libftprintf.a

SRC			= $(SRCS_CHAR) $(SRCS_FILE) $(SRCS_INTLIST) $(SRCS_LST) $(SRCS_MAT)\
			  $(SRCS_MEM) $(SRCS_NBR) $(SRCS_STR) $(SRCS_SYS) $(SRCS_WCHAR)\
			  $(SRCS_TAB) $(SRCS_CHARLST)

OBJ			= $(addprefix $(OBJS_DIR), $(SRC:.c=.o))

RED			= \033[31m
GREEN		= \033[32m
YELLO		= \033[33m
WHITE		= \033[37m
BIP			= \a

all				: $(NAME)

$(NAME)			: $(PRINTF) $(OBJS_DIR) $(OBJ)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)
		@echo "$(GREEN)$(NAME) has been successfully created !$(WHITE)."
		@say "librery has been successfully created !"

$(PRINTF)		:
		@make -C $(PRINTF_DIR)
		@cp $(PRINTF_DIR)/$(PRINTF) ./$(NAME)

$(OBJS_DIR)%.o	: ./src/%.c $(INC_DIR)
		@echo "$< ... $(GREEN) compiled $(WHITE)"
		@gcc $(FLAGES) $< -o $@ -I $(INC_DIR)
		@echo "\033[1A \033[2K \033[A"

$(OBJS_DIR)		:
		@mkdir -p $(OBJS_DIR);
		@mkdir -p $(OBJS_DIR)/$(DIR_CHARLST);
		@mkdir -p $(OBJS_DIR)/$(DIR_CHAR);
		@mkdir -p $(OBJS_DIR)/$(DIR_FILE);
		@mkdir -p $(OBJS_DIR)/$(DIR_INTLIST);
		@mkdir -p $(OBJS_DIR)/$(DIR_LST);
		@mkdir -p $(OBJS_DIR)/$(DIR_MAT);
		@mkdir -p $(OBJS_DIR)/$(DIR_MEM);
		@mkdir -p $(OBJS_DIR)/$(DIR_NBR);
		@mkdir -p $(OBJS_DIR)/$(DIR_STR);
		@mkdir -p $(OBJS_DIR)/$(DIR_TAB);
		@mkdir -p $(OBJS_DIR)/$(DIR_SYS);
		@mkdir -p $(OBJS_DIR)/$(DIR_WCHAR);

clean			:
		@make -C $(PRINTF_DIR) clean
		@rm -fr $(OBJS_DIR)
		@echo "$(RED)cleaned the libft binary file$(WHITE)."
		@say "cleaned the librery binary files."

fclean			:
		@make -C $(PRINTF_DIR) fclean
		@rm -fr $(OBJS_DIR)
		@rm -f $(NAME)
		@echo "$(RED)cleaned the $(NAME) file$(WHITE)."
		@echo "$(GREEN)the $(NAME) directory is totaly cleaned !!$(WHITE)."
		@say "the librery directory is totaly cleaned !"

re				: fclean all

norm 			:
	@norminette | grep -B 1 "Error"

t				:
	@make
	@cp $(NAME) ../test/$(NAME)

.PHONY : all clean fclean re
