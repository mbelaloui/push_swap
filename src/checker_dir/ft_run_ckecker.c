/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_ckecker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 12:54:48 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/04 20:48:23 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	run_action(t_int_list **list_a, t_int_list **list_b, int action)
{
	if (action == SA)
		ft_intervert_head_int_list(list_a);
	if (action == SB)
		ft_intervert_head_int_list(list_b);
	if (action == SS)
		ft_intervert_head_tow_int_list(list_a, list_b);
	if (action == PA)
		ft_push_first_to_list(list_b, list_a);
	if (action == PB)
		ft_push_first_to_list(list_a, list_b);
	if (action == RA)
		ft_shift_top_int_list(list_a);
	if (action == RB)
		ft_shift_top_int_list(list_b);
	if (action == RR)
		ft_shift_top_tow_int_list(list_a, list_b);
	if (action == RRA)
		ft_shift_bottom_int_list(list_a);
	if (action == RRB)
		ft_shift_bottom_int_list(list_b);
	if (action == RRR)
		ft_shift_bottom_tow_int_list(list_a, list_b);
}

void		ft_run_ckecker(t_int_list *list_a, t_options *option,
		char *act_name[22])
{
	t_int_list	*list_b;
	int			index;

	list_b = NULL;
	while (1)
	{
		if ((index = ft_get_id_action(act_name, list_a, list_b, option)) < 0)
			break ;
		run_action(&list_a, &list_b, index);
	}
	if (index == -1)
		(option->d) ? ft_printf("{red}ERROR action not found {eoc}\n") :
			ft_printf("{red}ERROR{eoc}\n");
	else if (index == -3)
		(option->d) ? ft_printf("ERROR READING ACTIONS") :
			ft_printf("{red}ERROR{eoc}\n");
	else
		ft_end_msg_check(option, index, list_a, list_b);
}
