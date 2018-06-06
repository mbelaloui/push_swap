/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 16:25:18 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/06 08:26:51 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static BOOL	run(char *param, t_options *option)
{
	t_int_list	*list_a;
	char		*actions_name[22];

	ft_init_actions_name(actions_name);
	list_a = NULL;
	if (!ft_add_end_values_int_list(param, &list_a, option))
		return (F && ft_clear_intlist(&list_a));
	if (option->t)
		main_debug_arg(list_a);
	else
		ft_run_ckecker(list_a, option, actions_name);
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
	ft_strdel(&param);
	return (0);
}
