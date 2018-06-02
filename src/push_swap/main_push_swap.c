/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 17:33:10 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/02 19:58:08 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	run_sort(t_int_list *list_a, t_options *option)
{
	t_int_list	*list_b;
	t_charlist	*action;

	action = NULL;
	list_b = NULL;
	ft_first_phase(&list_a, &list_b, option, &action);
	ft_second_pahse(&list_a, &list_b, option, action);
//	ft_final_pahse(&list_a, option, action);
	ft_put_list_charlist(action);
	ft_dell_list_charlist(&action);
	ft_clear_intlist(&list_b);
	ft_clear_intlist(&list_a);
}

BOOL	run(char *param, t_options *option)
{
	t_int_list	*list_a;

	list_a = NULL;
	if (!ft_add_end_values_int_list(param, &list_a, option))
		return (ft_clear_intlist(&list_a) && F);
	if (option->t)
		main_debug_arg(list_a);
	else
		run_sort(list_a, option);
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
	return (!ft_strdel(&param));
}
