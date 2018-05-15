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

void	head(t_int_list *list_a, t_int_list *list_b)
{
	ft_clear_scr();
	ft_printf("\t state lists now \n ");
	ft_put_tow_piles(list_a, list_b);
}

void	init(t_int_list **list_a, t_int_list **list_b)
{
	char *line;

	head(*list_a, *list_b);
	ft_printf("\n\t - choose <A/a> to initialise list A");
	ft_printf("\n\t - choose <B/b> to initialise list B");
	ft_printf("\n\nyour choice > ");
	get_next_line(0, &line);
	if (!ft_strcmp(line, "A") || !ft_strcmp(line, "a"))
			*list_a = NULL;
	else if (!ft_strcmp(line, "B") || !ft_strcmp(line, "b"))
			*list_b = NULL;
}

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


int		main()
{
	t_int_list *list_a;
	t_int_list *list_b;
	char	*line;
	int		choix;

	void (*fonctions[9])();
	list_a = NULL;
	list_b = NULL;
	ft_clear_scr();
	ft_printf("\t\t prograe de teste push swap   changer atoi to atoiintmax\n");
	while (1)
	{
		ft_print_menu(list_a, list_b);
		ft_printf("\n - please enter your choice > ", choix);
		get_next_line(0, &line);
		choix = ft_atoi(line);
		if (choix == 0 || choix > 11)
			break;
		if (choix == 1)
			init(&list_a, &list_b);
		if (choix == 2)
			ft_add_menu(&list_a, &list_b);
		if (choix == 3)
			ft_dell_menu(&list_a, &list_b);
		if (choix == 4)
			chercherelemlist(&list_a);
		if (choix == 5)
			ft_swap_menu(&list_a, &list_b);
		if (choix == 6)
			ft_shift_top_menu(&list_a, &list_b);
		if (choix == 7)
			ft_shift_down_menu(&list_a, &list_b);
		if (choix == 8)
			ft_push_menu(&list_a, &list_b);
		if (choix == 9)
			ft_intervert_head_tow_int_list(&list_a, &list_b);
		if (choix == 10)
			ft_shift_top_tow_int_list(&list_a, &list_b);
		if (choix == 11)
			ft_shift_bottom_tow_int_list(&list_a, &list_b);
		ft_clear_scr();
	}
	ft_clear_scr();
	ft_printf("ciao...");
	return (0);
}

void	ft_initfonctions(void (*fonctions[9])())
{
	/*	fonctions[0] = &creatlist;
		fonctions[1] = &;
		fonctions[2] = &;
		fonctions[3] = &;
		fonctions[4] = &;
		fonctions[5] = &;
		fonctions[6] = &;
		fonctions[7] = &;
		fonctions[8] = &;
		*/	//	return (fonctions);
}



