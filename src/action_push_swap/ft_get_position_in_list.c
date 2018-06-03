/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_position_in_list.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:27:13 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/03 19:35:51 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static int	get_pos(t_int_list *list, intmax_t elem)
{
	t_int_list	*pt_b;
	intmax_t	temp_min_list;
	int			index;

	pt_b = list->next;
	index = 1;
	ft_min_int_list(list, &temp_min_list);
	if (temp_min_list > elem)
		return (ft_get_index_min_int_list(list));
	while (pt_b)
	{
		if (list->data < elem && pt_b->data > elem)
			return (index);
		list = list->next;
		pt_b = pt_b->next;
		index++;
	}
	return (0);
}

int			ft_get_position_in_list(t_int_list *list, intmax_t elem)
{
	intmax_t	temp_max_list;

	if (!list)
		return (0);
	ft_max_int_list(list, &temp_max_list);
	if (elem > temp_max_list)
		return (ft_get_index_max_int_list(list) + 1);
	else
	{
		return (get_pos(list, elem));
	}
	return (0);
}
