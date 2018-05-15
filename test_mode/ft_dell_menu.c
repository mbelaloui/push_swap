/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dell_menu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 18:58:21 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/15 19:02:07 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	supdebut(t_int_list **list)
{
	char *line;
	intmax_t nbr;

	ft_clear_scr();
	ft_printf("vous allez supprimer un elem au debut de la list : \n");
	ft_dell_bgn_int_list(list);
	ft_printf("la liste \n ");
	ft_put_int_list(*list);

	get_next_line(0, &line);
}

void	supfin(t_int_list **list)
{
	char *line;
	intmax_t nbr;

	ft_clear_scr();
	ft_printf("vous allez supprimer un elem a la fin de la list : \n");
	ft_dell_end_int_list(list);
	ft_printf("la liste \n ");
	ft_put_int_list(*list);

	get_next_line(0, &line);
}

void	supprimerelemlist(t_int_list **list)
{
	char *	line;

	ft_clear_scr();
	ft_printf("vous allez supprimer un elem a la list : \n");
	ft_put_int_list(*list);
	ft_printf("vouez vous supprimer au debut tapper d.\n");
	ft_printf("vouez vous supprimer a la fin tapper f.\n");
	ft_printf("autre chose pour revenir au menu principal.\n");
	get_next_line(0, &line);
	if (line[0] == 'd')
		supdebut(list);
	if (line[0] == 'f')
		supfin(list);
}

void	ft_dell_menu(t_int_list **list_a, t_int_list **list_b)
{
	char	 *line;
	intmax_t nbr;

	ft_clear_scr();
	ft_printf("les listes avant \n ");
	ft_put_tow_piles(*list_a, *list_b);

	ft_printf("veillez choisir une liste A/B tout autre chois pour "
			"revemir au menu > ");
	get_next_line(0, &line);

	if (!ft_strcmp(line, "A") || !ft_strcmp(line, "a"))
		supprimerelemlist(list_a);
	else if (!ft_strcmp(line, "B") || !ft_strcmp(line, "b"))
		supprimerelemlist(list_b);
	ft_printf("les listes\n ");
	ft_put_tow_piles(*list_a, *list_b);
	get_next_line(0, &line);
}
