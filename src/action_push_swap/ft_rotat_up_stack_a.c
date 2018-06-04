/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotat_up_stack_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:12:46 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/03 19:15:44 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_rotat_up_stack_a(t_int_list **list_a, int nbr_rotations,
		t_charlist **action)
{
	while (nbr_rotations > 0)
	{
		ft_add_charlist("ra", action);
		ft_shift_top_int_list(list_a);
		nbr_rotations--;
	}
}
