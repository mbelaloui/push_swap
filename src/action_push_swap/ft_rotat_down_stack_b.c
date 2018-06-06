/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotat_down_stack_b.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:05:25 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/03 19:15:32 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_rotat_down_stack_b(t_int_list **list_b, int nbr_rotations,
		t_charlist **action)
{
	while (nbr_rotations > 0)
	{
		ft_add_charlist("rrb", action);
		ft_shift_bottom_int_list(list_b);
		nbr_rotations--;
	}
}
