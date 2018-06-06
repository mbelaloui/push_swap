/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 17:33:10 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/06 08:35:00 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	put_actions(t_charlist *list_actions)
{
	char*actions_name[22];
	int index;

	ft_init_actions_name(actions_name);
	while (list_actions)
	{
		index = ft_get_index_action(list_actions->data, actions_name);
		if (index == 0 || index == 3 || index == 5 || index == 8)
			ft_printf("{yellow}%s{eoc}\n", list_actions->data);
		if (index == 1 || index == 4 || index == 6 || index == 9)
			ft_printf("{cyan}%s{eoc}\n", list_actions->data);
		if (index == 2 || index == 7 || index == 10)
			ft_printf("{green}%s{eoc}\n", list_actions->data);
		list_actions = list_actions->next;
	}
}

static void	run_sort(t_int_list *list_a, t_options *option)
{
	t_int_list	*list_b;
	t_charlist	*action;

	action = NULL;
	list_b = NULL;
	ft_first_phase(&list_a, &list_b, option, &action);
	ft_second_pahse(&list_a, &list_b, action);
	(option->c) ? put_actions(action) : ft_put_list_charlist(action);
	ft_dell_list_charlist(&action);
	ft_clear_intlist(&list_b);
	ft_clear_intlist(&list_a);
}

static BOOL	run(char *param, t_options *option)
{
	t_int_list	*list_a;

	list_a = NULL;
	if (!ft_add_end_values_int_list(param, &list_a, option))
		return (ft_clear_intlist(&list_a) && F);
	if (option->t)
		main_debug_arg(list_a);
	else
		run_sort(list_a, option);
	ft_clear_intlist(&list_a);
	return (T);
}

static BOOL	error(BOOL b, t_options option)
{
	return (ft_print_error(b, option));
}

int			main(int argc, char **argv)
{
	t_options	op;
	char		*param;
	int			index;

	index = 0;
	if (argc == 1)
		return (0);
	param = ft_mat_to_str(argv, 1);
	ft_init_option(&op);
	if (ft_isempty(param))
		return (ft_strdel(&param) && error(T, op) && error(F, op));
	if (!ft_is_param_valid(param, &op, &index))
	{
		return (ft_strdel(&param) &&
			((op.opt) ? ft_invalide_parametre(op) : ft_print_error(T, op)));
	}
	if (!run(param + index, &op))
	{
		ft_print_error(T, op);
		if ((op.d && op.exist_double) || (op.d && op.overflow))
			ft_print_error_detail(op);
		return (ft_strdel(&param) && ft_print_error(F, op));
	}
	return (!ft_strdel(&param));
}
