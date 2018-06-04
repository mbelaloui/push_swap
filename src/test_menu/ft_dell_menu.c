/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dell_menu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 18:58:21 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/16 16:37:24 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	supdebut(t_int_list **list)
{
	char *line;

	ft_clear_scr();
	ft_dell_bgn_int_list(list);
	ft_printf("\t you have removed an item at the beginning of the list !! \n");
	ft_printf("\t state list now \n \t - ");
	ft_put_int_list(*list);
	get_next_line(0, &line);
	ft_strdel(&line);
}

static void	supfin(t_int_list **list)
{
	char *line;

	ft_clear_scr();
	ft_dell_end_int_list(list);
	ft_printf("\t you have removed an item at the end of the list !! \n");
	ft_printf("\t state list now \n \t - ");
	ft_put_int_list(*list);
	get_next_line(0, &line);
	ft_strdel(&line);
}

static void	supprimerelemlist(t_int_list **list)
{
	char *line;

	ft_clear_scr();
	ft_printf("\t state list now \n \t - ");
	ft_put_int_list(*list);
	ft_printf("do you want to remove at the beginning tapper <B or b>.\n");
	ft_printf("do you want to remove at the end tapper <E or e>.\n");
	ft_printf("\n\t - any other thing to come back to the main menu.");
	ft_printf("\n\nyour choice > ");
	get_next_line(0, &line);
	if (line[0] == 'b' || line[0] == 'B')
		supdebut(list);
	if (line[0] == 'E' || line[0] == 'e')
		supfin(list);
	ft_strdel(&line);
}

void		ft_dell_menu(t_int_list **list_a, t_int_list **list_b)
{
	char	*line;

	ft_print_head(*list_a, *list_b);
	ft_printf("\n\t - choose <A/a> to remove items to list A.");
	ft_printf("\n\t - choose <B/b> to remove items to list B.");
	ft_printf("\n\t - any other thing to come back to the main menu.");
	ft_printf("\n\nyour choice > ");
	get_next_line(0, &line);
	if (!ft_strcmp(line, "A") || !ft_strcmp(line, "a"))
		supprimerelemlist(list_a);
	else if (!ft_strcmp(line, "B") || !ft_strcmp(line, "b"))
		supprimerelemlist(list_b);
	ft_strdel(&line);
	ft_printf("\tlists\n ");
	ft_print_head(*list_a, *list_b);
	get_next_line(0, &line);
	ft_strdel(&line);
}
