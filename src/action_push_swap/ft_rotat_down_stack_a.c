/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotat_down_stack_a.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:11:56 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/28 12:39:19 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/action.h"

void  ft_rotat_down_stack_a(t_int_list **list_a, t_int_list *list_b, t_options *option, int nbr_rotations, t_charlist **action)
{
	while (nbr_rotations > 0)
	{
		ft_add_charlist("rra\n", action);
		ft_shift_bottom_int_list(list_a);
		if (option->d)
			ft_put_tow_piles(*list_a, list_b);
		nbr_rotations--;
	}
}
