/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_menu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 20:03:26 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/16 16:38:04 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_push_menu(t_int_list **list_a, t_int_list **list_b)
{
	char*line;

	ft_print_head(*list_a, *list_b);
	ft_printf("\n\t- choose <A/a> to push the first item of List A to list B.");
	ft_printf("\n\t- choose <B/b> to push the first item of List B to list A.");
	ft_printf("\n\t- any other thing to come back to the main menu.");
	ft_printf("\n\nyour choice > ");
	get_next_line(0, &line);
	if (!ft_strcmp(line, "A") || !ft_strcmp(line, "a"))
		ft_push_first_to_list(list_a, list_b);
	else if (!ft_strcmp(line, "B") || !ft_strcmp(line, "b"))
		ft_push_first_to_list(list_b, list_a);
	ft_strdel(&line);
	ft_printf("\tlists\n ");
	ft_print_head(*list_a, *list_b);
	get_next_line(0, &line);
	ft_strdel(&line);
}
