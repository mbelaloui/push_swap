/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_phase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 20:22:04 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/02 20:15:42 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/action.h"
/*
   void	ft_first_phase(t_int_list **list_a, t_int_list **list_b,
   t_options *option, t_charlist **action)
   {

   while (ft_size_intlist(*list_a) > 2)
   {
   if (!ft_is_sorted_asc_int_list(*list_a))
   {
   ft_add_charlist("pb", action);
   ft_push_first_to_list(list_a, list_b);
   if (option->d)
   ft_put_tow_piles(*list_a, *list_b);
   }
   else
   break;
   }
   if (!ft_is_sorted_asc_int_list(*list_a))
   {
   ft_add_charlist("sa", action);
   ft_intervert_head_int_list(list_a);
   if (option->d)
   ft_put_tow_piles(*list_a, *list_b);
   }
   }*/

/*
 **    35      [971        29}
 **
 */

static	void	set_pres(t_options *option, t_int_list *list_a)
{
	int sizelist = ft_size_intlist(list_a);
	if (sizelist > 400)
	{
		option->pres = 10;
	}
/*	else if (ft_size_intlist(list_a) > 350)
	{
		option->pres = 20;
	}
*/	else if (sizelist > 250)
	{
		option->pres = 20;
	}
	else if  (sizelist > 90)
		option->pres = 40;
	else if (sizelist > 50)
		option->pres = option->pres - 1;

}


void	ft_first_phase(t_int_list **list_a, t_int_list **list_b,
		t_options *option, t_charlist **action)
{
	intmax_t	min;
	intmax_t	pivot;
	int			sizelist;

	sizelist = ft_size_intlist(*list_a);
	ft_get_pivot(*list_a, sizelist, &pivot, option->pres);
	while (!ft_is_sorted_asc_int_list(*list_a))
	{
		if ((*list_a)->data <= pivot)
			ft_push_first_to_list_a(list_a, list_b, action);
		else
			ft_rotat_up_stack_a(list_a, 1, action);
		ft_min_int_list(*list_a, &min);
		if (min >= pivot)
		{
			set_pres(option, *list_a);
//		option->pres = (option->pres < 30) ? option->pres++ : option->pres - 1;
			if (!ft_get_pivot(*list_a, sizelist, &pivot, option->pres))
				break ;
		}
		sizelist = ft_size_intlist(*list_a);
	}
	while (!ft_is_sorted_asc_int_list(*list_a))
		ft_push_first_to_list_a(list_a, list_b, action);
}
