/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_menu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 19:02:35 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/15 19:04:13 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_swap_menu(t_int_list **list_a, t_int_list **list_b)
{
	char *line;
	intmax_t nbr;

	ft_clear_scr();
	ft_printf("les listes avant \n ");
	ft_put_tow_piles(*list_a, *list_b);
	ft_printf("veillez choisir une liste A/B tout autre chois "
			"pour revemir au menu > ");
	get_next_line(0, &line);
	if (!ft_strcmp(line, "A"))
		ft_intervert_head_int_list(list_a);
	else if (!ft_strcmp(line, "B"))
		ft_intervert_head_int_list(list_b);
	ft_printf("les listes\n ");
	ft_put_tow_piles(*list_a, *list_b);
	get_next_line(0, &line);
}

