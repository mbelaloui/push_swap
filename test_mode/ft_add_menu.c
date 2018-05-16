/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_menu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 18:52:37 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/16 15:42:40 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	ajouterdebut(t_int_list **list)
{
	char		*line;
	intmax_t	nbr;

	ft_clear_scr();
	ft_printf("\t you will add an item at the beginning of the list !! \n");
	ft_printf("\nplease enter the numbers, one by one if you are done please "
			"enter something else.\n");
	while (1)
	{
		ft_printf("please enter a number > ");
		get_next_line(0, &line);
		if (ft_is_valid_int_tab(line))
		{
			nbr = ft_atoi(line);
			ft_add_bgn_int_list(nbr, list);
		}
		else
			break ;
	}
	ft_printf("\t state list now \n \t - ");
	ft_put_int_list(*list);
	get_next_line(0, &line);
	ft_strdel(&line);
}

static void	ajouterfin(t_int_list **list)
{
	char		*line;
	intmax_t	nbr;

	ft_clear_scr();
	ft_printf("\t you will add an item at the end of the list !! \n");
	ft_printf("\nplease enter the numbers, one by one if you are done please "
			"enter something else.\n");
	while (1)
	{
		ft_printf("please enter a number > ");
		get_next_line(0, &line);
		if (ft_is_valid_int_tab(line))
		{
			nbr = ft_atoi(line);
			ft_add_end_int_list(nbr, list);
		}
		else
			break ;
	}
	ft_printf("\t state list now \n \t - ");
	ft_put_int_list(*list);
	get_next_line(0, &line);
	ft_strdel(&line);
}

static void	ajoutelemlist(t_int_list **list)
{
	char *line;

	ft_clear_scr();
	ft_printf("\t state list now \n \t - ");
	ft_put_int_list(*list);
	ft_printf("do you want to add to the beginning tapper <B or b>.\n");
	ft_printf("do you want to add at the end tapper <E or e>.\n");
	ft_printf("\n\t - any other thing to come back to the main menu.");
	ft_printf("\n\nyour choice > ");
	get_next_line(0, &line);
	if (line[0] == 'b' || line[0] == 'B')
		ajouterdebut(list);
	if (line[0] == 'E' || line[0] == 'e')
		ajouterfin(list);
	ft_strdel(&line);
}

void		ft_add_menu(t_int_list **list_a, t_int_list **list_b)
{
	char *line;

	ft_print_head(*list_a, *list_b);
	ft_printf("\n\t - choose <A/a> to add items to list A.");
	ft_printf("\n\t - choose <B/b> to add items to list B.");
	ft_printf("\n\t - any other thing to come back to the main menu.");
	ft_printf("\n\nyour choice > ");
	get_next_line(0, &line);
	if (!ft_strcmp(line, "A") || !ft_strcmp(line, "a"))
		ajoutelemlist(list_a);
	else if (!ft_strcmp(line, "B") || !ft_strcmp(line, "b"))
		ajoutelemlist(list_b);
	ft_printf("\tlists\n ");
	ft_print_head(*list_a, *list_b);
	get_next_line(0, &line);
	ft_strdel(&line);
}
