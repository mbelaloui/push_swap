/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_second_pahse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 20:18:22 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/01 18:16:25 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/action.h"

void	ft_second_pahse(t_int_list **list_a, t_int_list **list_b,
		t_options *option, t_charlist *action)
{
	intmax_t	val;
	intmax_t	max;
	int			index;

	while (*list_b)
	{
		index = ft_get_index_max_int_list(*list_b);
		if (index <= ft_size_intlist(*list_b) / 2)
			ft_rotat_up_stack_b(list_b, index, &action);
		else
			ft_rotat_down_stack_b(list_b, ft_size_intlist(*list_b) - index,
					&action);
		val = (*list_b)->data;
		index = ft_get_position_in_list(*list_a, val);
		if (index <= ft_size_intlist(*list_a) / 2)
			ft_rotat_up_stack_a(list_a, index, &action);
		else
			ft_rotat_down_stack_a(list_a, ft_size_intlist(*list_a) - index,
					&action);
		ft_push_first_to_list_b(list_a, list_b, &action);
	}
}
