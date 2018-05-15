/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 12:49:26 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/15 20:05:08 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void	read_piles(t_int_list ** list_a, t_int_list ** list_b)
{
	char *line;

	ft_printf("pas encore developer...");
	get_next_line(0, &line);
}

BOOL	chercherelemlist(t_int_list **list)
{
	char *line;

	ft_printf("pas encore developer...");
	get_next_line(0, &line);
	return (T);
}

int		read_choice()
{
	ft_printf("\n - please enter your choice > ", choix);
	get_next_line(0, &line);
	return (ft_atoi(line));
}

int		main()
{
	t_int_list	*list_a;
	t_int_list	*list_b;
	char		*line;
	int			choix;
	void		(*fonctions[11])(t_int_list *list_a, t_int_list *list_b);

	list_a = NULL;
	list_b = NULL;
	ft_clear_scr();
	ft_printf("\t\t prograe de teste push swap   changer atoi to atoiintmax\n");
	ft_initfonctions(fonctions);
	while (1)
	{
		ft_print_menu(list_a, list_b);
		choix = read_choice();
		if (choix =< 0 || choix > 11)
			break;
		fonctions[choix - 1](list_a, list_b);
		ft_clear_scr();
	}
	ft_clear_scr();
	ft_printf("ciao...");
	return (0);
}

void	ft_initfonctions(void (*fonctions[11])())
{
	fonctions[0] = &ft_init_menu;
	fonctions[1] = &ft_add_menu;
	fonctions[2] = &ft_dell_menu;
	fonctions[3] = &chercherelemlist;
	fonctions[4] = &ft_swap_menu;
	fonctions[5] = &ft_shift_top_menu;
	fonctions[6] = &ft_shift_down_menu;
	fonctions[7] = &ft_push_menu;
	fonctions[8] = &ft_intervert_head_tow_int_list;
	fonctions[9] = &ft_shift_top_tow_int_list;
	fonctions[10] = &ft_shift_bottom_tow_int_list;	
}
