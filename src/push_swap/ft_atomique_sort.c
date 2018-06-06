/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atomique_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 20:52:05 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/04 20:56:34 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void	atomique_sort_phas_one(t_int_list **list_a, t_charlist **action,
		t_int_list **pt_2, t_int_list **pt_3)
{
	t_int_list *pt_1;

	pt_1 = *list_a;
	if (pt_1->data > (*pt_3)->data)
	{
		if ((*pt_2)->data > (*pt_3)->data)
		{
			ft_intervert_head_list_a(list_a, action);
			ft_rotat_down_stack_a(list_a, 1, action);
		}
		else
			ft_rotat_up_stack_a(list_a, 1, action);
	}
	else
		ft_intervert_head_list_a(list_a, action);
}

static void	atomique_sort_phas_tow(t_int_list **list_a, t_charlist **action,
		t_int_list **pt_1, t_int_list **pt_3)
{
	if ((*pt_1)->data < (*pt_3)->data)
	{
		ft_rotat_down_stack_a(list_a, 1, action);
		ft_intervert_head_list_a(list_a, action);
	}
	else
		ft_rotat_down_stack_a(list_a, 1, action);
}

void		ft_atomique_sort(t_int_list **list_a, t_charlist **action)
{
	t_int_list *pt_1;
	t_int_list *pt_2;
	t_int_list *pt_3;

	pt_1 = *list_a;
	pt_2 = pt_1->next;
	pt_3 = pt_2->next;
	if (pt_1->data > pt_2->data)
		atomique_sort_phas_one(list_a, action, &pt_2, &pt_3);
	else
		atomique_sort_phas_tow(list_a, action, &pt_1, &pt_3);
}
