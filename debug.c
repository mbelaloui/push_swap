/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 12:49:26 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/18 12:40:15 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void	read_piles(t_int_list **list_a, t_int_list **list_b)
{
	char *line;

	ft_printf("pas encore developer...");
	get_next_line(0, &line);
}

int		read_choice(void)
{
	int		ret;
	char	*line;

	ft_printf("\n - please enter your choice > ");
	get_next_line(0, &line);
	ret = ft_atoi(line);
	ft_strdel(&line);
	return (ret);
}

void	ft_initfonctions_debug(void (*fonctions[11])())
{
	fonctions[0] = &ft_init_menu;
	fonctions[1] = &ft_add_menu;
	fonctions[2] = &ft_dell_menu;
	fonctions[3] = &ft_chercherelemlist;
	fonctions[4] = &ft_swap_menu;
	fonctions[5] = &ft_shift_top_menu;
	fonctions[6] = &ft_shift_down_menu;
	fonctions[7] = &ft_push_menu;
	fonctions[8] = &ft_swap_two_list;
	fonctions[9] = &ft_shift_up_two_list;
	fonctions[10] = &ft_shift_down_two_list;
}

int		main_debug_arg(t_int_list *la)
{
	t_int_list	*list_a;
	t_int_list	*list_b;
	int			choix;
	void		(*fonctions[11])(t_int_list **list_a, t_int_list **list_b);

	list_a = la;
	list_b = NULL;
	ft_clear_scr();
	ft_initfonctions_debug(fonctions);
	while (1)
	{
		ft_print_menu(list_a, list_b);
		choix = read_choice();
		if (choix <= 0 || choix > 11)
			break ;
		fonctions[choix - 1](&list_a, &list_b);
		ft_clear_scr();
	}
	ft_clear_scr();
	ft_clear_int_list(&list_a);
	ft_clear_int_list(&list_b);
	ft_printf("ciao...");
	return (0);
}

int		main_debug(void)
{
	t_int_list	*list_a;
	t_int_list	*list_b;
	int			choix;
	void		(*fonctions[11])(t_int_list **list_a, t_int_list **list_b);

	list_a = NULL;
	list_b = NULL;
	ft_clear_scr();
	ft_initfonctions_debug(fonctions);
	while (1)
	{
		ft_print_menu(list_a, list_b);
		choix = read_choice();
		if (choix <= 0 || choix > 11)
			break ;
		fonctions[choix - 1](&list_a, &list_b);
		ft_clear_scr();
	}
	ft_clear_scr();
	ft_clear_int_list(&list_a);
	ft_clear_int_list(&list_b);
	ft_printf("ciao...");
	return (0);
}
