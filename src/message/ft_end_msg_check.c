/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_end_msg_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 18:54:59 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/21 14:14:30 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_end_msg_check(t_options *option, int index, t_int_list *list_a,
		t_int_list *list_b)
{
	index = (index == -2) ? 0 : index;
	if (option->d && index == 0)
		ft_printf("END of execution");
	if (option->d)
		ft_put_tow_piles(list_a, list_b);
	if (index > -1 && index < 11)
	{
		if (ft_is_sorted_asc_int_list(list_a) && list_b == NULL)
			ft_tell_ok(option);
		else
			ft_tell_ko(option, list_a, list_b);
	}
}
