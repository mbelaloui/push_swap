/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 15:45:07 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/18 12:58:58 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../../../test.h"

void	ft_init_menu(t_int_list **list_a, t_int_list **list_b);
void	ft_add_menu(t_int_list **list_a, t_int_list **list_b);
void	ft_dell_menu(t_int_list **list_a, t_int_list **list_b);
void	ft_swap_menu(t_int_list **list_a, t_int_list **list_b);
void	ft_shift_top_menu(t_int_list **list_a, t_int_list **list_b);
void	ft_shift_down_menu(t_int_list **list_a, t_int_list **list_b);
void	ft_push_menu(t_int_list **list_a, t_int_list **list_b);
void	ft_print_head(t_int_list *list_a, t_int_list *list_b);

int		main_debug(void);
int		main_debug_arg(t_int_list *list_a);
void	ft_swap_two_list(t_int_list **list_a, t_int_list **list_b);
void	ft_shift_up_two_list(t_int_list **list_a, t_int_list **list_b);
void	ft_shift_down_two_list(t_int_list **list_a, t_int_list **list_b);
void	ft_chercherelemlist(t_int_list **list_a, t_int_list **list_b);

int		ft_print_error(BOOL show_error);
int		ft_invalide_parametre(t_options option);
void	ft_print_error_detail(t_options option);

void	ft_run_ckecker(t_int_list *list_a, t_options *option,
				BOOL (*actions_tab[11])(), char *actions_name[22]);
void	ft_end_msg_check(t_options *option, int index, t_int_list *list_a,
				t_int_list *list_b);
int		ft_get_id_action(char *actions_name[22], t_int_list *list_a,
				t_int_list *list_b, t_options *option);

void	ft_tell_ok(t_options *option);
void	ft_tell_ko(t_options *option, t_int_list *list_a, t_int_list *list_b);

void	ft_init_actions_tab(
		BOOL (*actions_tab[11])(t_int_list **list_a, t_int_list **list_b));
int		ft_get_index_action(char *str, char *actions_name[11]);
void	ft_run_ckecker(t_int_list *list_a, t_options *option,
				BOOL (*actions_tab[11])(), char *actions_name[22]);

#endif
