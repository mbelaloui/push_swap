/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_action_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 18:47:44 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/18 14:11:31 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/**
** void	ft_init_actions_tab(BOOL (*actions_tab[11])(t_int_list **list_a,
**			t_int_list **list_b))
*/

void	ft_init_actions_tab(BOOL (*actions_tab[11])())
{
	actions_tab[SA] = &ft_intervert_head_int_list;
	actions_tab[SB] = &ft_intervert_head_int_list;
	actions_tab[SS] = &ft_intervert_head_tow_int_list;
	actions_tab[PA] = &ft_push_first_to_list;
	actions_tab[PB] = &ft_push_first_to_list;
	actions_tab[RA] = &ft_shift_top_int_list;
	actions_tab[RB] = &ft_shift_top_int_list;
	actions_tab[RR] = &ft_shift_top_tow_int_list;
	actions_tab[RRA] = &ft_shift_bottom_int_list;
	actions_tab[RRB] = &ft_shift_bottom_int_list;
	actions_tab[RRR] = &ft_shift_bottom_tow_int_list;
}
