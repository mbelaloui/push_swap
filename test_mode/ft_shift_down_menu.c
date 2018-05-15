/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift_down_menu.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 19:57:18 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/15 20:02:22 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_shift_down_menu(t_int_list **list_a, t_int_list **list_b)
{
	char *line;
	intmax_t nbr;

	ft_clear_scr();
	ft_printf("les listes avant \n ");
	ft_put_tow_piles(*list_a, *list_b);
	ft_printf("veillez choisir une liste A/B tout autre chois "
			"pour revemir au menu > ");
	get_next_line(0, &line);
	if (!ft_strcmp(line, "A") || !ft_strcmp(line, "a"))
		ft_shift_bottom_int_list(list_a);
	else if (!ft_strcmp(line, "B") || !ft_strcmp(line, "b"))
		ft_shift_bottom_int_list(list_b);
	ft_printf("les listes \n ");
	ft_put_tow_piles(*list_a, *list_b);
	get_next_line(0, &line);
}
