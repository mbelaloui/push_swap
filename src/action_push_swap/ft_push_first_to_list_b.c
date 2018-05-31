/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_first_to_list_b.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 19:41:12 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/31 19:43:06 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/action.h"

void	ft_push_first_to_list_b(t_int_list **list_a, t_int_list **list_b, 
		t_charlist **action)
{
	ft_add_charlist("pa", action);
	ft_push_first_to_list(list_b, list_a);
}
