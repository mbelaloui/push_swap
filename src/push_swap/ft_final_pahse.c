/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final_pahse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 20:20:33 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/06 08:34:52 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_final_pahse(t_int_list **list_a, t_charlist *action)
{
	intmax_t index;

	index = ft_get_index_min_int_list(*list_a);
	if (index < (int)(ft_size_intlist(*list_a) / 2))
		ft_rotat_up_stack_a(list_a, index, &action);
	else
		ft_rotat_down_stack_a(list_a,
				ft_size_intlist(*list_a) - index, &action);
}
