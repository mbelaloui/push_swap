/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_head.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 20:11:17 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/15 20:11:31 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_print_head(t_int_list *list_a, t_int_list *list_b)
{
	ft_clear_scr();
	ft_printf("\t state lists now \n ");
	ft_put_tow_piles(list_a, list_b);
}
