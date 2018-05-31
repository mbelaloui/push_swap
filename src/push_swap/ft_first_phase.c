/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_phase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 20:22:04 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/31 20:23:09 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/action.h"

void	ft_first_phase(t_int_list **list_a, t_int_list **list_b,
		t_options *option, t_charlist **action)
{
	intmax_t	min;
	intmax_t	pivot;
	int			pres;
	int			sizelist;

	sizelist = ft_size_intlist(*list_a);
	ft_get_pivot(*list_a, sizelist, &pivot, pres = 10);
	while (sizelist > 2 && !ft_is_sorted_asc_int_list(*list_a))
	{
		if ((*list_a)->data <= pivot)
			ft_push_first_to_list_a(list_a, list_b, action);
		else
			ft_rotat_up_stack_a(list_a, 1, action);
		ft_min_int_list(*list_a, &min);
		if (min >= pivot)
		{
			pres++;
			if (!ft_get_pivot(*list_a, sizelist, &pivot, pres))
				break ;
		}
		sizelist = ft_size_intlist(*list_a);
	}
	if (!ft_is_sorted_asc_int_list(*list_a))
		ft_intervert_head_list_a(list_a, action);
}
