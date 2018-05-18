/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_ckecker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:11:39 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/18 14:10:13 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	put_message_end()
{

}

/*
void	ft_run_ckecker(t_int_list *list_a, t_options *option)
{
	t_int_list	*list_b;
	BOOL		(*actions_tab[11])(t_int_list **list_a, t_int_list **list_b);
	char		*actions_name[22];
	int			index;
	char		*action;
	int			eof;

	ft_init_actions_tab(actions_tab);
	ft_init_actions_name(actions_name);
	action =NULL;
	list_b = NULL;
	while (1)
	{
		if (option->d)
			ft_put_tow_piles(list_a, list_b);
		eof = get_next_line(1 ,&action);
		index = ft_get_index_action(action, actions_name);// dans le checker
		ft_strdel(&action);
		if (eof <= 0)
			break ;
		if (index == 0 || index == 2 || index == 4 || index == 5 ||
				index == 7 || index == 8 || index == 10)
			(actions_tab[index])(&list_a, &list_b); // dans le checker
		else if (index == 1 || index == 3 || index == 6 || index == 9)
			(actions_tab[index])(&list_b, &list_a); // dans le checker
		else
		{
			(option->d) ? ft_printf("{red}ERROR action not found {eoc}\n") :
				ft_printf("{red}ERROR{eoc}\n") ;
			break ;
		}
	}
	if (option->d && eof == 0)
		ft_printf("END of execution");
	if (option->d && eof == -1)
		ft_printf("ERROR READING ACTIONS");
	if (option->d)
		ft_put_tow_piles(list_a, list_b);
	if ((index > -1 && index < 11) || eof == 0)
	{
		if (ft_is_sorted_des_int_list(list_a) && list_b == NULL)
		{
			ft_printf("OK\n");
			if (option->d)
				ft_printf("pile A is sorted and pile b is empty\n");
		}
		else
		{
			ft_printf("KO\n");
			if (option->d)
			{
				if (ft_is_sorted_des_int_list(list_a))
					ft_printf("pile A is sorted but");
				else if (list_b)
					ft_printf("pile A is not sorted and");
				else
					ft_printf("pile A is not sorted");
				if (list_b)
					ft_printf(" pile B is not empty.\n");
			}
		}
	}
}*/
