/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tel_ko.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 18:53:12 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/17 18:53:47 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_tell_ko(t_options *option, t_int_list *list_a, t_int_list *list_b)
{
	ft_printf("KO\n");
	if (option->d)
	{
		if (ft_is_sorted_des_int_list(list_a))
			ft_printf("pile A is sorted but");
		else if (list_b)
			ft_printf("pile A is not sorted and");
		else
			ft_printf("pile A is not sorted");
		if (list_b)
			ft_printf(" pile B is not empty.\n");
	}
}
