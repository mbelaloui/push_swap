/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:03:26 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/31 20:52:48 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACTION_H
# define ACTION_H

# include "./push_swap.h"

void	ft_rotat_down_stack_a(t_int_list **list,int nbr_rotations,
		t_charlist **action);
void	ft_rotat_up_stack_a(t_int_list **list, int nbr_rotations,
		t_charlist **action);

void	ft_rotat_down_stack_b(t_int_list **list,int nbr_rotations,
		t_charlist **action);
void	ft_rotat_up_stack_b(t_int_list **list, int nbr_rotations,
		t_charlist **action);
int		ft_get_position_in_list(t_int_list *list, intmax_t elem);

void	ft_push_first_to_list_a(t_int_list **list_a, t_int_list **list_b,
				t_charlist **action);
void	ft_push_first_to_list_b(t_int_list **list_a, t_int_list **list_b,
				t_charlist **action);

void	ft_intervert_head_list_a(t_int_list **list_a, t_charlist **action);
void	ft_intervert_head_list_b(t_int_list **list_b, t_charlist **action);

void	ft_first_phase(t_int_list **list_a, t_int_list **list_b,
		t_options *option, t_charlist **action);
void	ft_second_pahse(t_int_list **list_a, t_int_list **list_b,
				t_options *option, t_charlist *action);
void	ft_final_pahse(t_int_list **list_a, t_options *option,
		t_charlist *action);


int		ft_get_best_path(t_int_list *list);
int		ft_get_best_to_move(t_int_list *list_src, t_int_list *list_dest);







int		ft_get_nbr_move_to_push(t_int_list *list, intmax_t elem);
int		ft_get_nbr_move_to_put(t_int_list *list, intmax_t elem);
void	ft_clean_list_rra_ra(t_charlist **action);
BOOL	ft_are_cancel_out_action(char *action_a, char *action_b);
#endif
