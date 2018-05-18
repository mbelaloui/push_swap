/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 17:33:10 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/18 20:47:16 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void	ft_shell_sort(intmax_t *temp_tab)
{
	int			pt;
	int			pt_2;
	intmax_t	temp;
	BOOL		permut;

	permut = 1;
	pt = 0;
	while (permut)
	{
		permut = 0;

		pt_2 = pt + 1;
		while (temp_tab[pt_2])
		{
			if (temp_tab[pt] > temp_tab[pt_2])
			{
				ft_printf(" pt = %ld\tpt_2 = %ld\n", temp_tab[pt], temp_tab[pt_2]);
				temp = temp_tab[pt_2];
				temp_tab[pt_2] = temp_tab[pt];
				temp_tab[pt] = temp;
				pt_2 = pt + 1;
				break;
			}
			pt_2++;
		}
	pt++;	
	}
	ft_printf(" \n*********************************\n");
}

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

	ft_shell_sort(temp_tab);
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
	//		ft_printf("index = %ld, max = %d\n", index, max);
	while (list)
	{
		if (list->data > max)
		{
			index_max = index;
			max = list->data;
//				ft_printf("index = %ld, max = %d\n", index, max);
		}
		list = list->next;
		index++;
	}
	return (index_max);
}

void	run_sort(t_int_list *list_a, t_options *option)
{
	t_int_list	*list_b;
	int index_max;
	int sizelist;
	intmax_t max;

	list_b = NULL;
	if (option->d)
		ft_put_tow_piles(list_a, list_b);
	while (!ft_is_sorted_des_int_list(list_a))
	{
		sizelist = ft_size_int_list(list_a) - 1;
		index_max = ft_get_index_max_int_list(list_a);
	//	if (option->d)
		//	ft_printf(" max = %ld, lenlist = %d\n", index_max, sizelist);
		
		ft_max_int_list(list_a, &max);
		if (max ==  list_a->data)
		{
			ft_printf("pb\n");
			ft_push_first_to_list(&list_a, &list_b);
			if (option->d)
				ft_put_tow_piles(list_a, list_b);
		}
		else if (max ==  (list_a->next)->data)
		{
			ft_printf("sa\n");
			ft_intervert_head_int_list(&list_a);
			if (option->d)
				ft_put_tow_piles(list_a, list_b);
			ft_printf("pb\n");
			ft_push_first_to_list(&list_a, &list_b);
			if (option->d)
				ft_put_tow_piles(list_a, list_b);
	}else if (index_max > sizelist/2)
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
		//		if (option->d)
		//		ft_printf(" max = %ld, lenlist = %d\n", index_max, sizelist);

			}
			index_max = 0;
			ft_printf("pb\n");
			ft_push_first_to_list(&list_a, &list_b);
			if (option->d)
			ft_put_tow_piles(list_a, list_b);
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
				{ft_printf("ra\n");
				ft_shift_top_int_list(&list_a);
				if (option->d)
					ft_put_tow_piles(list_a, list_b);
				}index_max--;
				
			if (option->d)
			ft_printf(" max = %ld, lenlist = %d\n", index_max, sizelist);
			}
			index_max = 0;
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
/*
intmax_t			*int_list_to_int_tab(t_int_list *list)
{
	intmax_t		*tab;
	int		size;

	size = ft_size_int_list(list);
	if (!(tab = malloc (sizeof(*tab) * size)))
			return (NULL);
	size = 0;
	while (list)
	{
		tab[size] = list->data;
		list = list->next;
		size++;
	}
	return (tab);
}

intmax_t			*int_list_to_int_tab_part(t_int_list *list, int l, int r)
{
	intmax_t		*tab;
	int		size;

	size = r - l;
	if (!(tab = malloc (sizeof(*tab) * size)))
			return (NULL);
	size = 0;
	while (list && l != 0)
	{
		l--;
		list = list->next;
	};
	while (list)
	{
		tab[size] = list->data;
		list = list->next;
		size++;
	}
	return (tab);
}

void	merg(intmax_t *tab, int l, int r, int size)
{
	int mid;
	size = r;
	int pt = l;

	ft_printf("\n----------------------------------------------------------\n",l, mid, r);
	while (pt < size)
	{
		ft_printf("pt = %d \t tab[%d] = %ld\n", pt,pt,tab[pt]);
		pt++;
	}
//	mid = (r + l)/2;
//	ft_printf("\n**************** l = %d  mid = %d  r = %d ***********************\n",l, mid, r);
//	merg_sort(tab, l, mid, size);
//	merg_sort(tab, mid, r, size);
//	merg(tab,l,  mid, r);

}*/
/*
void	merg_sort(intmax_t *tab, int l, int r, int size)
{
	int mid;
	size = r;
	int pt = l;

	if (l < r)
	{
		while (pt < size)
		{
			ft_printf("pt = %d \t tab[%d] = %ld\n", pt,pt,tab[pt]);
			pt++;
		}
		mid = (r + l)/2;
	ft_printf("\n-------------- med = %d    ----------\n", mid);
//		ft_printf("\n**************** l = %d  mid = %d  r = %d ***********************\n",l, mid, r);
		merg_sort(int_list_to_int_tab_part(), l, mid, size);
		merg_sort(tab, mid + 1, size, size);
//		merg(tab,l, mid, r);
	}
}
*/

/*
void		ft_merg_sort(t_int_list **list_a)
{
	intmax_t	*tab;
	int			size;

	tab = int_list_to_int_tab(*list_a);
	size = ft_size_int_list(*list_a);
	int pt = 0;
	while (pt < size)
	{
		ft_printf("pt = %d \t tab[%d] = %ld\n", pt,pt,tab[pt]);
		pt++;
	}
	merg_sort(tab, 0, size, size);
}
*/
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

//		ft_merg_sort(&list_a);

//		ft_med_int_list(list_a);
		//		ft_run_ckecker(list_a, option, actions_tab, actions_name);
		run_sort(list_a, option);
		//		ft_put_int_list(list);
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
