/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_best_to_move.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 20:39:49 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/31 20:52:06 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/action.h"

int		ft_get_best_to_move(t_int_list *list_src, t_int_list *list_dest)
{
	int index;
	int nbr_move;
	int ret;
	int best;

	ret = -1;
	index = 0;
	best = ft_size_intlist(list_src) + ft_size_intlist(list_dest);
	while (list_src)
	{
		nbr_move = ft_get_position_in_list(list_dest, list_src->data);
		if (nbr_move + index < best)
		{
			best = nbr_move + index;
			ret = index;
		}
		list_src = list_src->next;
		index++;
	}
	return (ret);
}
