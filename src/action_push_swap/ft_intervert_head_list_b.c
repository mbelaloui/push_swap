/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intervert_head_list_b.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 20:08:24 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/03 19:17:29 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_intervert_head_list_b(t_int_list **list_b, t_charlist **action)
{
	ft_add_charlist("sb", action);
	ft_intervert_head_int_list(list_b);
}
