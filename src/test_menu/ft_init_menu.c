/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_menu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 20:05:57 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/17 12:58:24 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_init_menu(t_int_list **list_a, t_int_list **list_b)
{
	char *line;

	ft_print_head(*list_a, *list_b);
	ft_printf("\n\t - choose <A/a> to initialise list A.");
	ft_printf("\n\t - choose <B/b> to initialise list B.");
	ft_printf("\n\t - any other thing to come back to the main menu.");
	ft_printf("\n\nyour choice > ");
	get_next_line(0, &line);
	if (!ft_strcmp(line, "A") || !ft_strcmp(line, "a"))
		*list_a = NULL;
	else if (!ft_strcmp(line, "B") || !ft_strcmp(line, "b"))
		*list_b = NULL;
	ft_strdel(&line);
}
