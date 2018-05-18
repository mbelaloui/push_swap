/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_ckecker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 12:54:48 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/18 14:11:00 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	is_action_a(int index)
{
	if (index == 0 || index == 2 || index == 4 || index == 5 ||
			index == 7 || index == 8 || index == 10)
		return (1);
	return (0);
}

void		ft_run_ckecker(t_int_list *list_a, t_options *option,
		BOOL (*actions_tab[11])(), char *act_name[22])
{
	t_int_list	*list_b;
	int			index;

	list_b = NULL;
	while (1)
	{
		if ((index = ft_get_id_action(act_name, list_a, list_b, option)) < 0)
			break ;
		if (is_action_a(index))
			(actions_tab[index])(&list_a, &list_b);
		else
			(actions_tab[index])(&list_b, &list_a);
	}
	if (index == -1)
		(option->d) ? ft_printf("{red}ERROR action not found {eoc}\n") :
			ft_printf("{red}ERROR{eoc}\n");
	else if (index == -3)
		(option->d) ? ft_printf("ERROR READING ACTIONS") :
			ft_printf("{red}ERROR{eoc}\n");
	else
		ft_end_msg_check(option, index, list_a, list_b);
}
