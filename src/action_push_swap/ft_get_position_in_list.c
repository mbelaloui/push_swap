/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_position_in_list.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:27:13 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/01 18:29:10 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/action.h"

int	ft_get_position_in_list(t_int_list *list, intmax_t elem)
{
	t_int_list	*pt_b;
	intmax_t	temp_min_max_list;
	int			index;

	if (!list)
		return (0);
	pt_b = list->next;
	index = 1;
	ft_max_int_list(list, &temp_min_max_list);
	if (elem > temp_min_max_list)
		return (ft_get_index_max_int_list(list) + 1);
	else
	{
		ft_min_int_list(list, &temp_min_max_list);
		if (temp_min_max_list > elem)
			return (ft_get_index_min_int_list(list));
		while (pt_b)
		{
			if (list->data < elem && pt_b->data > elem)
				return (index);
			list = list->next;
			pt_b = pt_b->next;
			index++;
		}
	}
	return (0);
}
