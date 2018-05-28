/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_list_rra_ra.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:13:14 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/28 13:33:27 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/action.h"

void	ft_clean_list_rra_ra(t_charlist **action)
{
	BOOL modified;
	t_charlist *pt;
	t_charlist *sauv_pt;
	t_charlist *to_free_pt;

	modified = T;
	while (modified)
	{
		modified = F;
		pt = *action;
		sauv_pt = NULL;
		while (pt && pt->next)
		{
			if (ft_are_cancel_out_action(pt->data, (pt->next)->data))
			{
				to_free_pt = pt->next;
				sauv_pt->next = to_free_pt->next;
				ft_dell_charlist(&pt);
				ft_dell_charlist(&to_free_pt);
				pt = sauv_pt;
				modified = T;
			}
			else
				sauv_pt = pt;
			pt = pt->next;
		}
	}
}
