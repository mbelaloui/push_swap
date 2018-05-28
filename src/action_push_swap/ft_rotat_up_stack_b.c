/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotat_up_stack_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:06:01 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/28 17:21:10 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/action.h"

void	ft_rotat_up_stack_b(t_int_list **list_b, int nbr_rotations,
		t_charlist **action)
{
	while (nbr_rotations > 0)
	{
		ft_add_charlist("rb", action);
		ft_shift_top_int_list(list_b);
		nbr_rotations--;
	}
}
