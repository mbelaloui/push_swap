/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intervert_head_list_a.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 20:01:24 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/03 19:17:19 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_intervert_head_list_a(t_int_list **list_a, t_charlist **action)
{
	ft_add_charlist("sa", action);
	ft_intervert_head_int_list(list_a);
}
