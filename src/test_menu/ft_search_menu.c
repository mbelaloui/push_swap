/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_menu.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 15:42:40 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/01 16:58:48 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	search(t_int_list *list)
{
	char		*line;
	intmax_t	temp_i;
	long double	temp_d;

	ft_clear_scr();
	ft_printf("\t state list now \n \t - ");
	ft_put_int_list(list);
	ft_printf("\n\t - enter <max> to find the max value of a list.");
	ft_printf("\n\t - enter <min> to find the max value of a list.");
	ft_printf("\n\t - enter <med> to find the median value of a list.");
	ft_printf("\n\t - enter <avg> to find the average value of a list.");
	ft_printf("\n\t - any other thing to come back to the main menu.");
	ft_printf("\n\nyour choice > ");
	get_next_line(0, &line);
	if (!ft_strcmp(line, "med") && (temp_d = ft_med_int_list(list, &temp_d)))
		ft_printf("med = %ld", (intmax_t)temp_d);
	else if (!ft_strcmp(line, "min") && ft_min_int_list(list, &temp_i))
		ft_printf("min = %ld", temp_i);
	else if (!ft_strcmp(line, "max") && ft_max_int_list(list, &temp_i))
		ft_printf("max = %ld", temp_i);
	else if (!ft_strcmp(line, "avg") && ft_avg_intlist(list, &temp_d))
		ft_printf("avg = %ld", (intmax_t)temp_d);
	ft_strdel(&line);
	get_next_line(0, &line);
	ft_strdel(&line);
}

void		ft_search_menu(t_int_list **list_a, t_int_list **list_b)
{
	char *line;

	ft_print_head(*list_a, *list_b);
	ft_printf("\n\t - choose <A/a> to add items to list A.");
	ft_printf("\n\t - choose <B/b> to add items to list B.");
	ft_printf("\n\t - any other thing to come back to the main menu.");
	ft_printf("\n\nyour choice > ");
	get_next_line(0, &line);
	if (!ft_strcmp(line, "A") || !ft_strcmp(line, "a"))
		search(*list_a);
	else if (!ft_strcmp(line, "B") || !ft_strcmp(line, "b"))
		search(*list_b);
	ft_strdel(&line);
	ft_printf("\tlists\n ");
	ft_print_head(*list_a, *list_b);
	get_next_line(0, &line);
	ft_strdel(&line);
}
