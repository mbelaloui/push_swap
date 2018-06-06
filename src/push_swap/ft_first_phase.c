/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_phase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 20:22:04 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/06 08:26:27 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void	smal_list(t_int_list **list_a, t_int_list **list_b,
		t_charlist **action, t_options *option)
{
	intmax_t	min;
	int			sizelist;
	intmax_t	pivot;

	sizelist = ft_size_intlist(*list_a);
	ft_get_pivot(*list_a, sizelist, &pivot, option->pres);
	while (!ft_is_sorted_asc_int_list(*list_a) && sizelist > 3)
	{
		if ((*list_a)->data < pivot)
			ft_push_first_to_list_a(list_a, list_b, action);
		else
			ft_rotat_up_stack_a(list_a, 1, action);
		ft_min_int_list(*list_a, &min);
		if (min >= pivot)
		{
			option->pres--;
			ft_get_pivot(*list_a, sizelist, &pivot, option->pres);
		}
		sizelist = ft_size_intlist(*list_a);
	}
	if (!ft_is_sorted_asc_int_list(*list_a))
		ft_atomique_sort(list_a, action);
}

static void	big_list(t_int_list **list_a, t_int_list **list_b,
		t_charlist **action, t_options *option)
{
	intmax_t	min;
	intmax_t	pivot;
	int			sizelist;

	sizelist = ft_size_intlist(*list_a);
	ft_min_int_list(*list_a, &min);
	ft_get_pivot(*list_a, sizelist, &pivot, option->pres);
	if (min >= pivot)
	{
		option->pres++;
		ft_get_pivot(*list_a, sizelist, &pivot, option->pres);
	}
	if ((*list_a)->data <= pivot)
		ft_push_first_to_list_a(list_a, list_b, action);
	else
		ft_rotat_up_stack_a(list_a, 1, action);
}

void		ft_first_phase(t_int_list **list_a, t_int_list **list_b,
		t_options *option, t_charlist **action)
{
	int			sizelist;

	option->pres = 10;
	sizelist = ft_size_intlist(*list_a);
	while (!ft_is_sorted_asc_int_list(*list_a) && sizelist > 120)
	{
		big_list(list_a, list_b, action, option);
		sizelist = ft_size_intlist(*list_a);
	}
	option->pres = 40;
	if (!ft_is_sorted_asc_int_list(*list_a))
	{
		if (sizelist >= 3)
			smal_list(list_a, list_b, action, option);
		else
			ft_intervert_head_list_a(list_a, action);
	}
}
