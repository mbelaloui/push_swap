/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_first_to_list_a.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 19:35:31 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/03 19:16:38 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_push_first_to_list_a(t_int_list **list_a, t_int_list **list_b,
		t_charlist **action)
{
	ft_add_charlist("pb", action);
	ft_push_first_to_list(list_a, list_b);
}
