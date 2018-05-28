/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_list_rra_ra.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:13:14 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/28 19:26:51 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/action.h"

void	clean(t_charlist *sauv_pt,t_charlist **action)
{
	t_charlist	*to_free_pt;

	ft_printf("\n***************************************************\n");

	if (sauv_pt)
	 	ft_printf(" pt_sauv = %s\t action == %s \t action->next = %s  \n",
			 sauv_pt->data,  (*action)->data, ((*action)->next)->data);
	else
	 	ft_printf(" \t\t\t action == %s \t action->next = %s \n",
			  (*action)->data, ((*action)->next)->data);


	to_free_pt = (*action)->next;
	if (sauv_pt)
		sauv_pt->next = to_free_pt->next;
	else
		sauv_pt = to_free_pt->next;

	if (sauv_pt)
	 	ft_printf(" pt_sauv = %s\t action == %s \t action->next = %s  \n",
			 sauv_pt->data,  (*action)->data, ((*action)->next)->data);
	else
	 	ft_printf(" \t\t\t action == %s \t action->next = %s \n",
			  (*action)->data, ((*action)->next)->data);


	to_free_pt = (*action)->next;
	ft_dell_charlist(&to_free_pt);
	
	to_free_pt = (*action);

	ft_dell_charlist(&to_free_pt);
	ft_printf(" 3 \n");
	
if (sauv_pt)
{	*action = sauv_pt;

	ft_printf(" action == %s \n", (*action)->data);
}	
/*


	ft_printf("1  \n");
	if (sauv_pt)
		sauv_pt->next = to_free_pt->next;
	else
		sauv_pt = to_free_pt->next;
	ft_printf(" 2 \n");

	action = sauv_pt;
	ft_printf("5  \n");*/
}

void	ft_clean_list_rra_ra(t_charlist **action)
{
	BOOL		modified;
	t_charlist	*pt;
	t_charlist	*sauv_pt;

	modified = T;

	while (modified)
	{
		modified = F;
		pt = *action;
		sauv_pt = NULL;
		while (pt)// && pt->next)
		{
			
			ft_printf("{GREEN}  voila  pt = %s {EOC}", pt->data);

			if (ft_are_cancel_out_action(pt->data, (pt->next)->data))
			{
				clean(sauv_pt, &pt);
		//		modified = T;
		//		sauv_pt = pt;
//				pt = pt->next;
			}
			else
			{
				sauv_pt = pt;
				pt = pt->next;
			//ft_printf(" 7 \n");
		//	if (pt)
//			{
			//	ft_printf(" 8 \n");
			//	ft_printf(" 9 \n");
			}
		}
	}
}
