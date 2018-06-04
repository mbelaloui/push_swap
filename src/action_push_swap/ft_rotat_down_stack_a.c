/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotat_down_stack_a.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:11:56 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/03 19:15:12 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_rotat_down_stack_a(t_int_list **list_a, int nbr_rotations,
		t_charlist **action)
{
	while (nbr_rotations > 0)
	{
		ft_add_charlist("rra", action);
		ft_shift_bottom_int_list(list_a);
		nbr_rotations--;
	}
}
