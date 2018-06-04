/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 16:25:18 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/04 20:03:23 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_init_option(t_options *opt)
{
	opt->a = 0;
	opt->c = 0;
	opt->d = 0;
	opt->h = 0;
	opt->l = 0;
	opt->t = 0;
}

BOOL	run(char *param, t_options *option)
{
	t_int_list	*list_a;
	BOOL		(*actions_tab[11])(t_int_list **list_a, t_int_list **list_b);
	char		*actions_name[22];

	ft_init_actions_tab(actions_tab);
	ft_init_actions_name(actions_name);
	list_a = NULL;
	if (!ft_add_end_values_int_list(param, &list_a, option))
		return (F);
	if (option->t)
		main_debug_arg(list_a);
	else
	{
		ft_run_ckecker(list_a, option, actions_tab, actions_name);
		ft_clear_intlist(&list_a);
	}
	return (T);
}

int		main(int argc, char **argv)
{
	t_options	option;
	char		*param;
	int			index;

	index = 0;
	if (argc == 1)
		return (0);
	param = ft_mat_to_str(argv, 1);
	if (ft_isempty(param))
		return (ft_strdel(&param) && ft_print_error(T) && ft_print_error(F));
	ft_init_option(&option);
	if (!ft_is_param_valid(param, &option, &index))
	{
		return (ft_strdel(&param) &&
			((option.opt) ? ft_invalide_parametre(option) : ft_print_error(T)));
	}
	if (!run(param + index, &option))
	{
		ft_print_error(T);
		if ((option.d && option.exist_double) || (option.d && option.overflow))
			ft_print_error_detail(option);
		return (ft_strdel(&param) && ft_print_error(F));
	}
	ft_strdel(&param);
	return (0);
}
