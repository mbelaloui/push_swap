/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_ckecker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 12:54:48 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/06 08:25:54 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	run_action(t_int_list **list_a, t_int_list **list_b, int action)
{
	if (action == SA || action == SA + 11)
		ft_intervert_head_int_list(list_a);
	if (action == SB || action == SB + 11)
		ft_intervert_head_int_list(list_b);
	if (action == SS || action == SS + 11)
		ft_intervert_head_tow_int_list(list_a, list_b);
	if (action == PA || action == PA + 11)
		ft_push_first_to_list(list_b, list_a);
	if (action == PB || action == PB + 11)
		ft_push_first_to_list(list_a, list_b);
	if (action == RA || action == RA + 11)
		ft_shift_top_int_list(list_a);
	if (action == RB || action == RB + 11)
		ft_shift_top_int_list(list_b);
	if (action == RR || action == RR + 11)
		ft_shift_top_tow_int_list(list_a, list_b);
	if (action == RRA || action == RRA + 11)
		ft_shift_bottom_int_list(list_a);
	if (action == RRB || action == RRB + 11)
		ft_shift_bottom_int_list(list_b);
	if (action == RRR || action == RRR + 11)
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
	ft_clear_intlist(&list_a);
	ft_clear_intlist(&list_b);
}
