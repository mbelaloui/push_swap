# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 21:48:22 by mbelalou          #+#    #+#              #
#    Updated: 2018/05/19 16:55:49 by mbelalou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

FLAGES		= -Wall -Wextra -Werror -c

DIR_CHAR	= src/char
SRC_CHAR	= ft_chartoint.c ft_isascii.c ft_islower.c ft_putchar.c ft_toupper.c\
			  ft_isalnum.c ft_isblank.c ft_isprint.c ft_putchar_fd.c\
			  ft_isalpha.c ft_isdigit.c ft_isupper.c ft_tolower.c
SRCS_CHAR	= $(addprefix $(DIR_CHAR)/, $(SRC_CHAR))

DIR_FILE	= src/file/
SRC_FILE	= ft_open_file.c get_next_line.c
SRCS_FILE	= $(addprefix $(DIR_FILE)/, $(SRC_FILE))

DIR_INTLIST	= src/intlist/
SRC_INTLIST	= ft_add_bgn_int_list.c ft_add_end_int_list.c ft_avg_int_list.c\
			  ft_clear_int_list.c ft_dell_bgn_int_list.c ft_dell_end_int_list.c\
			  ft_getnbr_found_elem_int_list.c ft_getval_int_list.c\
			  ft_intervert_head_int_list.c ft_intervert_head_tow_int_list.c\
			  ft_is_empty_int_list.c ft_is_in_int_list.c\
			  ft_is_sorted_asc_int_list.c ft_is_sorted_des_int_list.c\
			  ft_max_int_list.c ft_min_int_list.c ft_new_int_list.c\
			  ft_push_first_to_list.c ft_put_int_list.c ft_put_tow_piles.c\
			  ft_shift_bottom_int_list.c ft_shift_bottom_tow_int_list.c\
			  ft_shift_top_int_list.c ft_shift_top_tow_int_list.c\
			  ft_size_int_list.c ft_int_list_to_int_tab.c
SRCS_INTLIST= $(addprefix $(DIR_INTLIST)/, $(SRC_INTLIST))

DIR_LST	= src/lst
SRC_LST		= ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c\
			  ft_lstnew.c
SRCS_LST	= $(addprefix $(DIR_LST)/, $(SRC_LST))

DIR_MAT	= src/mat
SRC_MAT		= ft_free_mat.c ft_matlen.c   ft_putmat.c ft_mat_to_str.c
SRCS_MAT	= $(addprefix $(DIR_MAT)/, $(SRC_MAT))

DIR_MEM	= src/mem
SRC_MEM		= ft_bzero.c ft_memccpy.c ft_memcmp.c ft_memdel.c ft_memset.c\
			  ft_memalloc.c ft_memchr.c ft_memcpy.c ft_memmove.c
SRCS_MEM	= $(addprefix $(DIR_MEM)/, $(SRC_MEM))

DIR_NBR	= src/nbr
SRC_NBR		= ft_abs.c ft_decimal_to_base_stat.c ft_max.c ft_atoi.c\
			  ft_get_char_base.c ft_min.c ft_atoi_v1.c ft_get_len_value_base.c\
			  ft_nbrlen.c ft_atoi_v2.c ft_get_len_value_ubase.c ft_putnbr.c\
			  ft_base_to_decimal.c ft_get_mask.c ft_putnbr_fd.c\
			  ft_base_to_decimal_v2.c ft_intochar.c ft_udecimal_to_base_stat.c\
			  ft_decimal_to_base_dynm.c ft_is_elem_base.c ft_unbrlen.c\
			  ft_is_overflow_intmax.c ft_atointmax.c
SRCS_NBR	= $(addprefix $(DIR_NBR)/, $(SRC_NBR))

DIR_STR	= src/str
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

DIR_SYS	= src/sys
SRC_SYS		= ft_temporize.c ft_clear_scr.c
SRCS_SYS	= $(addprefix $(DIR_SYS)/, $(SRC_SYS))

DIR_WCHAR	= src/wchar
SRC_WCHAR	= ft_putwstr.c ft_wcharlen.c ft_wstrlen.c ft_wchar_to_string.c\
			  ft_wstringlen.c
SRCS_WCHAR	= $(addprefix $(DIR_WCHAR)/, $(SRC_WCHAR))

INC_DIR		= inc/

OBJS_DIR	= bin/

PRINTF_DIR	= src/printf

PRINTF		= libftprintf.a

SRC			= $(SRCS_CHAR) $(SRCS_FILE) $(SRCS_INTLIST) $(SRCS_LST) $(SRCS_MAT)\
			  $(SRCS_MEM) $(SRCS_NBR) $(SRCS_STR) $(SRCS_SYS) $(SRCS_WCHAR)

OBJ			= $(addprefix $(OBJS_DIR), $(SRC:.c=.o))

RED			= \x1b[31m
GREEN		= \x1b[32m
YELLO		= \x1b[33m
WHITE		= \x1b[37m
BIP			= \a

all				: $(NAME)

$(NAME)			: $(PRINTF) $(SRC) $(OBJS_DIR) $(OBJ)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)
		@echo "$(GREEN)$(NAME) has been successfully created !$(WHITE)."
		@say "librery has been successfully created !"

$(PRINTF)		:
		@make -C $(PRINTF_DIR)
		@cp $(PRINTF_DIR)/$(PRINTF) ./$(NAME)

$(OBJS_DIR)%.o	: %.c $(INC_DIR)
		@gcc $(FLAGES) $< -o $@ -I $(INC_DIR)

$(OBJS_DIR)		:
		@mkdir -p $(OBJS_DIR);
		@mkdir -p $(OBJS_DIR)/$(DIR_CHAR);
		@mkdir -p $(OBJS_DIR)/$(DIR_FILE);
		@mkdir -p $(OBJS_DIR)/$(DIR_INTLIST);
		@mkdir -p $(OBJS_DIR)/$(DIR_LST);
		@mkdir -p $(OBJS_DIR)/$(DIR_MAT);
		@mkdir -p $(OBJS_DIR)/$(DIR_MEM);
		@mkdir -p $(OBJS_DIR)/$(DIR_NBR);
		@mkdir -p $(OBJS_DIR)/$(DIR_STR);
		@mkdir -p $(OBJS_DIR)/$(DIR_SYS);
		@mkdir -p $(OBJS_DIR)/$(DIR_WCHAR);

clean			:
		@make -C $(PRINTF_DIR) clean
		@rm -fr $(OBJS_DIR)
		@echo "$(RED)cleaned the libft binary file$(WHITE)."
		@say "cleaned the librery binary files. becase of romain"

fclean			:
		@make -C $(PRINTF_DIR) fclean
		@rm -fr $(OBJS_DIR)
		@rm -f $(NAME)
		@echo "$(RED)cleaned the $(NAME) file$(WHITE)."
		@echo "$(GREEN)the directory is totaly cleaned !!$(WHITE)."
		@say "librery has been totaly cleaned !"

re				: fclean all

norm 			:
	@norminette | grep -B 1 "Error"

t				:
	@make
	@cp $(NAME) ../test/$(NAME)

.PHONY : all clean fclean re
