/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_nbr_move_to_put.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:07:19 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/03 19:14:51 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int		ft_get_nbr_move_to_put(t_int_list *list, intmax_t elem)
{
	int	nbr_move;

	nbr_move = 0;
	while (list)
	{
		if (list->data > elem)
			return (nbr_move);
		nbr_move++;
		list = list->next;
	}
	return (nbr_move);
}
