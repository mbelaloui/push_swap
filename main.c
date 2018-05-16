/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 17:33:10 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/16 15:35:47 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void	run_sort(t_int_list *list)
{
	(void)list;
}

BOOL	run(char *param, t_options *option)
{
	t_int_list	*list;

	list = NULL;
	if (!ft_add_end_values_int_list(param, &list, option))
		return (F);
	run_sort(list);
	ft_put_int_list(list);
	ft_clear_int_list(&list);
	return (T);
}

void	printoverdflow(t_options option)
{
	if (option.l)
		ft_printf("overflow intmax values....\n");
	else
		ft_printf("overflow int values....\n");
}

void	exist_double(void)
{
	ft_printf(" element en double ...\n");
}

int		ft_print_error(BOOL show_error)
{
	if (show_error)
		write(2, "Error\n", 6);
	else
		ft_print_usage();
	return (1);
}

int		invalide_parametre(t_options option)
{
	char	*actions_name[22];

	if (option.h)
		ft_print_help();
	else if (option.a)
	{
		ft_init_actions_name(actions_name);
		ft_print_action(actions_name);
	}
	else if (option.t)
		ft_test_mode();
	else
	{	
		ft_print_error(T);
		if (option.d)
		ft_printf("invalide format of parametres or caracter"
				" in the parametre...\n");
		ft_print_usage();
	}
	return (1);
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
		return (ft_print_error(T) && ft_print_error(F));
	if (!ft_is_param_valid(param, &option, &index))
	{
		ft_strdel(&param);
		return ((option.opt) ? invalide_parametre(option) : ft_print_error(T));
	}







	if (!run(param + index, &option))
	{
		ft_print_error(T);
		if (option.d && option.exist_double)
			exist_double();
		if (option.d && option.overflow)
			printoverdflow(option);
		return (ft_print_error(F));
	}
	ft_strdel(&param);
	return (0);
}
