/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 15:45:07 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/16 16:45:39 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP
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
#endif
