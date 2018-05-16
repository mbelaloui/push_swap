/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift_down_menu.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 19:57:18 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/16 15:53:07 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_shift_down_menu(t_int_list **list_a, t_int_list **list_b)
{
	char*line;

	ft_print_head(*list_a, *list_b);
	ft_printf("\n\t - choose <A/a> to shift down the list A.");
	ft_printf("\n\t - choose <B/b> to shift down the list B.");
	ft_printf("\n\t - any other thing to come back to the main menu.");
	ft_printf("\n\nyour choice > ");
	get_next_line(0, &line);
	if (!ft_strcmp(line, "A") || !ft_strcmp(line, "a"))
		ft_shift_bottom_int_list(list_a);
	else if (!ft_strcmp(line, "B") || !ft_strcmp(line, "b"))
		ft_shift_bottom_int_list(list_b);
	ft_printf("\tlists\n ");
	ft_print_head(*list_a, *list_b);
	get_next_line(0, &line);
	ft_strdel(&line);
}
