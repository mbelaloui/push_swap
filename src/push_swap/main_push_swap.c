/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 17:33:10 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/19 20:11:44 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		ft_med_int_list(t_int_list *list)
{
	int			med;
	int			size;
	intmax_t	*temp_tab;

	if (!list)
		return (0);
	size = ft_size_int_list(list);
	temp_tab = malloc (sizeof(*temp_tab) * size);
	if (!temp_tab)
		return (0);
	int pt= 0;
	while (list)
	{
		temp_tab[pt] = list->data;
		list = list->next;
		pt++;
	}

	pt = 0;
	while(temp_tab[pt])
	{
		ft_printf(" %ld,", temp_tab[pt]);
		pt++;
	}

	return (2);
}

int		ft_get_index_max_int_list(const t_int_list *list)
{
	int			index;
	int			index_max;
	intmax_t	max;

	index = 0;
	index_max = 0;
	if (!list)
		return (0);
	max = list->data;
	while (list)
	{
		if (list->data > max)
		{
			index_max = index;
			max = list->data;
		}
		list = list->next;
		index++;
	}
	return (index_max);
}

void	run_sort(t_int_list *list_a, t_options *option)
{
	t_int_list	*list_b;
	int			index_max;
	int			sizelist;
	intmax_t	max;

	list_b = NULL;
	if (option->d)
		ft_put_tow_piles(list_a, list_b);
	while (!ft_is_sorted_des_int_list(list_a))
	{
		sizelist = ft_size_int_list(list_a) - 1;
		index_max = ft_get_index_max_int_list(list_a);
		ft_max_int_list(list_a, &max);
		if (max ==  (list_a->next)->data)
		{
			ft_printf("sa\n");
			ft_intervert_head_int_list(&list_a);
			if (option->d)
				ft_put_tow_piles(list_a, list_b);
		}
		else if (index_max > sizelist/2)
		{
			while (index_max <= sizelist)
			{
				if (list_a->data < (list_a->next)->data)
				{
					ft_printf("sa\n");
					ft_intervert_head_int_list(&list_a);
				if (option->d)
					ft_put_tow_piles(list_a, list_b);
				}
				ft_printf("rra\n");
				ft_shift_bottom_int_list(&list_a);
				if (option->d)
					ft_put_tow_piles(list_a, list_b);
				index_max++;
			}
		}
		else// if (index_max > sizelist/2)
		{
			while (index_max >= 0)
			{
				if (list_a->data < (list_a->next)->data)
				{
					ft_printf("sa\n");
					ft_intervert_head_int_list(&list_a);
					if (option->d)
					ft_put_tow_piles(list_a, list_b);
				}
				if (max != list_a->data )
				{
					ft_printf("ra\n");
					ft_shift_top_int_list(&list_a);
					if (option->d)
						ft_put_tow_piles(list_a, list_b);
				}
				index_max--;
			if (option->d)
			ft_printf(" max = %ld, lenlist = %d\n", index_max, sizelist);
			}
		}
		index_max = 0;
		if (!ft_is_sorted_des_int_list(list_a))
		{
			ft_printf("pb\n");
			ft_push_first_to_list(&list_a, &list_b);
			if (option->d)
				ft_put_tow_piles(list_a, list_b);
		}
	}
	while (list_b)
	{
		ft_printf("pa\n");
		ft_push_first_to_list(&list_b, &list_a);
		if (option->d)
			ft_put_tow_piles(list_a, list_b);
	}
}

BOOL	run(char *param, t_options *option)
{
	t_int_list	*list_a;

	list_a = NULL;
	if (!ft_add_end_values_int_list(param, &list_a, option))
		return (F);
	if (option->t)
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
