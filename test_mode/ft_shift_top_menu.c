/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift_top_menu.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 19:55:21 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/16 16:38:37 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_shift_top_menu(t_int_list **list_a, t_int_list **list_b)
{
	char*line;

	ft_print_head(*list_a, *list_b);
	ft_printf("\n\t - choose <A/a> to shift top the list A.");
	ft_printf("\n\t - choose <B/b> to shift top the list B.");
	ft_printf("\n\t - any other thing to come back to the main menu.");
	ft_printf("\n\nyour choice > ");
	get_next_line(0, &line);
	if (!ft_strcmp(line, "A") || !ft_strcmp(line, "a"))
		ft_shift_top_int_list(list_a);
	else if (!ft_strcmp(line, "B") || !ft_strcmp(line, "b"))
		ft_shift_top_int_list(list_b);
	ft_strdel(&line);
	ft_printf("\tlists\n ");
	ft_print_head(*list_a, *list_b);
	get_next_line(0, &line);
	ft_strdel(&line);
}
