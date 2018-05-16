/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_menu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 16:24:50 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/16 14:02:48 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	second_parti(void)
{
	ft_printf("\tchoose - {yellow}9{eoc}  -\t"
			"for {magenta}SA{eoc} and {magenta}SB{eoc} at the same time."
			"\t\t\t\t{green}<SS>{eoc}\n");
	ft_printf("\tchoose - {yellow}10{eoc} -\t"
			"for {magenta}RA{eoc} and {magenta}RB{eoc} at the same time."
			"\t\t\t\t{green}<RR>{eoc}\n");
	ft_printf("\tchoose - {yellow}11{eoc} -\t"
			"for {magenta}RRA{eoc} and {magenta}RRB{eoc} at the same time."
			"\t\t\t{green}<RRR>{eoc}\n");
	ft_printf("\tchoose any other value to leave the program !!! \n");
}

void		ft_print_menu(t_int_list *list_a, t_int_list *list_b)
{
	ft_put_tow_piles(list_a, list_b);
	ft_printf("Main menu, please choose an action :\n\n");
	ft_printf("\tchoose - {yellow}1{eoc}  -\t"
			"to initialize the list <A or B>.\n");
	ft_printf("\tchoose - {yellow}2{eoc}  -\t"
			"to add an item to list <A or B>.\n");
	ft_printf("\tchoose - {yellow}3{eoc}  -\t"
			"to remove an item from list <A or B>.\n");
	ft_printf("\tchoose - {yellow}4{eoc}  -\t"
			"to search for an item in the lists <A or B>.\n");
	ft_printf("\tchoose - {yellow}5{eoc}  -\t"
			"to swap the first two items of the list <A or B>."
			"\t{green}<SA/SB>{eoc}\n");
	ft_printf("\tchoose - {yellow}6{eoc}  -\t"
			"to shift up all items in the list <A or B>."
			"\t\t{green}<RA/RB>{eoc}\n");
	ft_printf("\tchoose - {yellow}7{eoc}  -\t"
			"to shift down all items in the list <A or B>."
			"\t\t{green}<RRA/RRB>{eoc}\n");
	ft_printf("\tchoose - {yellow}8{eoc}  -\t"
			"to move the first elem of <A in B or the inverce>."
			"\t{green}<PA/PB>{eoc}\n");
	second_parti();
}
