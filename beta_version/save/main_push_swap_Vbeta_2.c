/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 17:33:10 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/30 18:36:02 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	first_phase(t_int_list **list_a, t_int_list **list_b, t_options *option,
		t_charlist **action)
{
	int			sizelist_b;
	intmax_t min;
	intmax_t val;
	int			sizelist;
	long double	med;
	long double	med_b;
	BOOL  a;
	BOOL  b;
	int iter = 0;

	ft_med_int_list(*list_a, &med);
	sizelist = ft_size_int_list(*list_a);
	sizelist_b = ft_size_int_list(*list_a);
	
	b =T;

	med /= 8;
	while (sizelist > 2 && !ft_is_sorted_asc_int_list(*list_a))
	{

		ft_min_int_list(*list_a, &min);
		if ((*list_a)->data <= (intmax_t)med)
		{
			ft_add_charlist("pb", action);
			ft_push_first_to_list(list_a, list_b);
			if (option->d)
				ft_put_tow_piles(*list_a, *list_b);

		}
		else
		{
			ft_rotat_up_stack_a(list_a, 1, action);
			if (option->d)
				ft_put_tow_piles(*list_a, *list_b);
		}

		ft_get_val_intlist(*list_a, ft_get_index_min_int_list(*list_a), &val);
		if (val > med)
		{
/*		if (b)
		{
			ft_med_int_list(*list_b, &med);
			ft_get_val_intlist(*list_b, ft_get_index_max_int_list(*list_b), &val);
			while (med < val)
			{

				if ((*list_b)->data >= (intmax_t)med)
				{
					ft_add_charlist("pa", action);
					ft_push_first_to_list(list_b, list_a);
					if (option->d)
						ft_put_tow_piles(*list_a, *list_b);
				}
				else
				{
					ft_rotat_up_stack_b(list_b, 1, action);
					if (option->d)
						ft_put_tow_piles(*list_a, *list_b);
				}
				ft_get_val_intlist(*list_b, ft_get_index_max_int_list(*list_b), &val);
				
			}
			if(iter > 3)
				b =F;
		}

			iter++;
		*/	ft_med_int_list(*list_a, &med);
		}
		sizelist = ft_size_int_list(*list_a);
	}

	/****************************************************************************/

/*
	while (ft_size_int_list(*list_a) > 2)
	{
		if (!ft_is_sorted_asc_int_list(*list_a))
		{
			ft_add_charlist("pb", action);
			ft_push_first_to_list(list_a, list_b);
					if (option->d)
				ft_put_tow_piles(*list_a, *list_b);
		}
		else
			break;
	}
	if (!ft_is_sorted_asc_int_list(*list_a))
	{
		ft_add_charlist("sa", action);
		ft_intervert_head_int_list(list_a);
		if (option->d)
			ft_put_tow_piles(*list_a, *list_b);
	}

	*/

	/****************************************************************************/
}

void	second_pahse(t_int_list **list_a, t_int_list **list_b, t_options *option,
		t_charlist *action)
{
	intmax_t val;
	intmax_t max;
	int index;

	while (*list_b)
	{
//		ft_max_int_list(*list_b, &val);//->data;
		val = (*list_b)->data;
		index = ft_get_index_max_int_list(*list_b);
		if (index <= ft_size_int_list(*list_b) / 2)
			ft_rotat_up_stack_b(list_b, index, &action);
		else
			ft_rotat_down_stack_b(list_b, ft_size_int_list(*list_b) - index,
					&action);


		index = ft_get_position_in_list(*list_a, val);
		if (index <= ft_size_int_list(*list_a) / 2)
			ft_rotat_up_stack_a(list_a, index, &action);
		else
			ft_rotat_down_stack_a(list_a, ft_size_int_list(*list_a) - index,
					&action);
		ft_add_charlist("pa", &action);
		ft_push_first_to_list(list_b, list_a);
	}
}

void	final_pahse(t_int_list **list_a, t_options *option, t_charlist *action)
{
	intmax_t index;

	index = ft_get_index_min_int_list(*list_a);
	if (index <= ft_size_int_list(*list_a) / 2)
		ft_rotat_up_stack_a(list_a, index, &action);
	else
		ft_rotat_down_stack_a(list_a, ft_size_int_list(*list_a) - index, &action);
}

void	run_sort(t_int_list *list_a, t_options *option)
{
	t_int_list *list_b;
	t_charlist	*action;
	t_charlist	*head_action;

	action = NULL;
	list_b = NULL;
	first_phase(&list_a,&list_b, option, &action);
//	second_pahse(&list_a,&list_b, option, action);
//	final_pahse(&list_a, option, action);
	ft_put_list_charlist(action);
	if (option->d)
			ft_put_tow_piles(list_a, list_b);
}

BOOL	run(char *param, t_options *option)
{
	t_int_list	*list_a;

	list_a = NULL;
	if (!ft_add_end_values_int_list(param, &list_a, option))
	{	ft_clear_int_list(&list_a);
		return (F);
	}if (option->t)
	main_debug_arg(list_a);
	else
	{
		run_sort(list_a, option);
		ft_clear_int_list(&list_a);
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
		return (ft_strdel(&param) &&
				((option.opt) ? ft_invalide_parametre(option) : ft_print_error(T)));
	if (!run(param + index, &option))
	{
		ft_print_error(T);
		if ((option.d && option.exist_double) || (option.d && option.overflow))
			ft_print_error_detail(option);
		return (ft_strdel(&param) && ft_print_error(F));
	}
	return (!ft_strdel(&param));
}
