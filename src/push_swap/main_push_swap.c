/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 17:33:10 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/28 12:46:01 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	run_sort(t_int_list *list_a, t_options *option)
{
	t_int_list	*list_b;
	int			index_min;
	int			sizelist;
	intmax_t	min;

	list_b = NULL;
	if (option->d)
		ft_put_tow_piles(list_a, list_b);
	while (!ft_is_sorted_asc_int_list(list_a))
	{
		sizelist = ft_size_int_list(list_a) - 1;
		index_min = ft_get_index_min_int_list(list_a);
		ft_min_int_list(list_a, &min);
		if (min ==  (list_a->next)->data)
		{
			ft_printf("sa\n");
			ft_intervert_head_int_list(&list_a);
			if (option->d)
				ft_put_tow_piles(list_a, list_b);
		}
		else if (index_min > sizelist/2)
		{
			while (index_min <= sizelist)
			{
				/*				if (list_a->data > (list_a->next)->data)
								{
								ft_printf("sa\n");
								ft_intervert_head_int_list(&list_a);
								if (option->d)
								ft_put_tow_piles(list_a, list_b);
								}
								*/				ft_printf("rra\n");
				ft_shift_bottom_int_list(&list_a);
				if (option->d)
					ft_put_tow_piles(list_a, list_b);
				index_min++;
			}
		}
		else// if (index_max > sizelist/2)
		{
			while (index_min >= 0)
			{
				/*				if (list_a->data > (list_a->next)->data)
								{
								ft_printf("sa\n");
								ft_intervert_head_int_list(&list_a);
								if (option->d)
								ft_put_tow_piles(list_a, list_b);
								}
								*/				if (min != list_a->data )
				{
					ft_printf("ra\n");
					ft_shift_top_int_list(&list_a);
					if (option->d)
						ft_put_tow_piles(list_a, list_b);
				}
				index_min--;
				if (option->d)
					ft_printf(" min = %ld, lenlist = %d\n", index_min, sizelist);
			}
		}
		index_min = 0;
		if (!ft_is_sorted_asc_int_list(list_a))
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






void	run_sort_2(t_int_list *list_a, t_options *option)
{
	t_int_list	*list_b;
	int			index_min;
	int			sizelist;
	intmax_t	min;

	list_b = NULL;
	if (option->d)
		ft_put_tow_piles(list_a, list_b);
	while (!ft_is_sorted_asc_int_list(list_a))
	{
		sizelist = ft_size_int_list(list_a) - 1;
		index_min = ft_get_index_min_int_list(list_a);
		ft_min_int_list(list_a, &min);
		if (min ==  (list_a->next)->data)
		{
			ft_printf("sa\n");
			ft_intervert_head_int_list(&list_a);
			if (option->d)
				ft_put_tow_piles(list_a, list_b);
		}
		else if (index_min > sizelist/2)
		{
			while (index_min <= sizelist)
			{
				ft_printf("rra\n");
				ft_shift_bottom_int_list(&list_a);
				if (option->d)
					ft_put_tow_piles(list_a, list_b);
				index_min++;
			}
		}
		else// if (index_max > sizelist/2)
		{
			while (index_min >= 0)
			{
				if (min != list_a->data )
				{
					ft_printf("ra\n");
					ft_shift_top_int_list(&list_a);
					if (option->d)
						ft_put_tow_piles(list_a, list_b);
				}
				index_min--;
				if (option->d)
					ft_printf(" min = %ld, lenlist = %d\n", index_min, sizelist);
			}
		}
		index_min = 0;
		if (!ft_is_sorted_asc_int_list(list_a))
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


/* med to avg*/
void	run_sort_1(t_int_list *list_a, t_options *option)
{
	t_int_list *list_b;
	intmax_t med;
	intmax_t first_index_max;
	intmax_t last_index_max;
	int		sizelist;
	long double avg;

	t_charlist	*action = NULL;

	list_b = NULL;
	sizelist = ft_size_int_list(list_a);
	if (option->d)
		ft_put_tow_piles(list_a, list_b);
	while (sizelist > 2)
	{
		if (!ft_is_sorted_asc_int_list(list_a))
		{
			//			ft_printf("pb\n");

			ft_add_charlist("pb\n", &action);

			ft_push_first_to_list(&list_a, &list_b);
			if (option->d)
				ft_put_tow_piles(list_a, list_b);
		}
		else
			break;
		sizelist = ft_size_int_list(list_a);
	}
	if (!ft_is_sorted_asc_int_list(list_a))//)
	{
		ft_add_charlist("sa\n", &action);
		//		ft_printf("sa\n");
		ft_intervert_head_int_list(&list_a);
		if (option->d)
			ft_put_tow_piles(list_a, list_b);
	}

	int nbr;
	intmax_t val;
	//	ft_printf("\n*********************\n");

	while (list_b)
	{
		val = list_b->data;
		nbr = ft_get_nbr_move_to_put(list_a, val);

		//ft_printf(" val = %ld\tnbr move to put = %d  \n", val, nbr);

		if (nbr <= (int)ft_size_int_list(list_a)/2 )
		{
			//			ft_printf("1-\t size = %d\t nbr = %d \n", ft_size_int_list(list_a), nbr);
			//			ft_printf("1\n");
			ft_rotat_up_stack_a(&list_a,list_b, option, nbr, &action);
			ft_add_charlist("pa\n", &action);
			ft_push_first_to_list(&list_b, &list_a);
			if (option->d)
				ft_put_tow_piles(list_a, list_b);
			ft_rotat_down_stack_a(&list_a,list_b, option, nbr, &action);
		}
		else
		{
			//			ft_printf("2-\t size = %d\t nbr = %d \n", ft_size_int_list(list_a), nbr);
			int rot = ft_size_int_list(list_a) - nbr;
			ft_rotat_down_stack_a(&list_a,list_b, option, rot, &action);

			ft_add_charlist("pa\n", &action);
			ft_push_first_to_list(&list_b, &list_a);
			if (option->d)
				ft_put_tow_piles(list_a, list_b);
			ft_rotat_up_stack_a(&list_a,list_b, option, rot + 1, &action);
			//	ft_rotat_up_stack_a(&list_a,list_b, option, nbr, &action);
		}
	}

	//find an other way to place value	

	//

	//	ft_put_action(action);

	//ft_printf("\n********************************\n");

	ft_clean_list_rra_ra(&action);

	ft_put_charlist(action);

	// find_index_insertion(element first list b)
	// best way to get to the place
	// go to the place
	// pa
	//repeat

}

void	test_rotat(t_int_list *list_a, t_options *option)
{
	t_int_list *list_b;
	t_charlist	*action = NULL;

	list_b = NULL;
	if (option->d)
		ft_put_tow_piles(list_a, list_b);

	ft_add_charlist("pb1\n", &action);
	ft_add_charlist("pb2\n", &action);

	ft_rotat_down_stack_b(&list_a,list_b, option, 1, &action);
	ft_rotat_up_stack_b(&list_a,list_b, option, 1, &action);

	ft_rotat_up_stack_b(&list_a,list_b, option, 1, &action);
	ft_rotat_down_stack_b(&list_a,list_b, option, 1, &action);

	ft_rotat_down_stack_a(&list_a,list_b, option, 3, &action);
	ft_rotat_up_stack_a(&list_a,list_b, option, 3, &action);

	ft_printf("\n***********INPUT******************\n");	
	ft_put_charlist(action);
	ft_printf("\n********TRAITEMENT****************\n");	
	ft_clean_list_rra_ra(&action);
	ft_printf("\n***********OUTPUT*****************\n");	
	ft_put_charlist(action);

	ft_dell_list_charlist(&action);
}

int get_position_in_list(t_int_list *list, intmax_t elem)
{
	t_int_list	*pt_a;
	t_int_list	*pt_b;
	int			index;

	// peut etre optimiser utiliser directmenet list
	pt_a = list;
	pt_b = list->next;
	index = 1;
	intmax_t max_list;
	intmax_t min_list;

	ft_max_int_list(list, &max_list);
	if (elem > max_list)
	{
		//		ft_printf(" get emplassemesnt maix [%ld]  idex = %d ", elem , ft_get_index_max_int_list(list) + 1);
		return (ft_get_index_max_int_list(list) + 1);

		//		ft_printf(" get e;plassemesnt max et ajouter un  ");
	}
	else
	{
		ft_min_int_list(list, &min_list);
		if (min_list > elem )
		{
			//			ft_printf(" get emplassemesnt min [%ld] idex = %d ", elem , ft_get_index_min_int_list(list));
			return (ft_get_index_min_int_list(list));
		}
		while (pt_b)
		{

			ft_printf("elem %d\t pt_a = %ld \t pt_b  = %ld  \t index = %d \n ",elem, pt_a->data, pt_b->data, index);
			if (pt_a->data < elem && pt_b->data > elem)
				return (index);
			pt_a = pt_a->next;
			pt_b = pt_b->next;
			index++;
		}
		ft_printf("elem %d\t pt_a = %ld \t index = %d \n ",elem, pt_a->data,  index);
		if (list->data > elem)
			return (0);	
		//	if (pt_a->data < elem)
		//		return (0);
	}	
	return (0);// index % size_list
}

void	test_put_elem(t_int_list *list_a, t_options *option)
{
	t_int_list *list_b;
	t_charlist	*action = NULL;

	list_b = NULL;
	int 	sizelist = ft_size_int_list(list_a);
	if (option->d)
		ft_put_tow_piles(list_a, list_b);
	while (sizelist > 2)
	{
		if (!ft_is_sorted_asc_int_list(list_a))
		{
			//			ft_printf("pb\n");
			ft_add_charlist("pb\n", &action);
			ft_push_first_to_list(&list_a, &list_b);
			if (option->d)
				ft_put_tow_piles(list_a, list_b);
		}
		else
			break;
		sizelist = ft_size_int_list(list_a);
	}
	if (ft_is_sorted_asc_int_list(list_a))//)
	{
		ft_add_charlist("sa\n", &action);
		//				ft_printf("sa\n");
		ft_intervert_head_int_list(&list_a);
		if (option->d)
			ft_put_tow_piles(list_a, list_b);
	}


	while (list_b)
	{

		int index;

		//	ft_printf("\n len list = %d\n", ft_size_int_list(list_a));

		index = get_position_in_list(list_a, list_b->data);
		//	ft_printf("  index = %d \n ", index);
		if ( index <=  sizelist / 2 )
		{
			index = (!index) ? 1 : index;
			//		ft_printf("\n 1 index = %d\n", index);
			ft_rotat_up_stack_a(&list_a,list_b, option, index, &action);
			if (option->d)
				ft_put_tow_piles(list_a, list_b);
		}else
		{
			//		ft_printf("\n 2 index = %d\n", index);
			//		if (index % 2)  
			//			index = (index == sizelist) ? 0 : (sizelist  - index  1);
			//		else
			index = (index == sizelist) ? 0 : (sizelist  - index);
			//		ft_printf("\n 2 index = %d\n", index);
			ft_rotat_down_stack_a(&list_a,list_b, option, index , &action);
			/*		if (option->d)
					ft_put_tow_piles(list_a, list_b);
					*/	}

			ft_add_charlist("pa\n", &action);

			ft_push_first_to_list(&list_b, &list_a);
			if (option->d)
				ft_put_tow_piles(list_a, list_b);


			sizelist = ft_size_int_list(list_a);

			//ft_temporize(10);


	}		


	int ind = ft_get_index_min_int_list(list_a);
	sizelist = ft_size_int_list(list_a);
	if ( ind <  sizelist / 2 )
	{
		//ft_printf("\n 1 index = %d\n", ind);
		ft_rotat_up_stack_a(&list_a,list_b, option, ind, &action);
		if (option->d)
			ft_put_tow_piles(list_a, list_b);
	}else
	{
		//		ft_printf("\n 2 index = %d \n", ind);

		ft_rotat_down_stack_a(&list_a,list_b, option, ind - (sizelist/2) + 2, &action);
		if (option->d)
			ft_put_tow_piles(list_a, list_b);
	}


	ft_put_charlist(action);



	/*
	//ft_printf("\nasdasdas \n");

	ft_printf("\n***********INPUT******************\n");	
	ft_put_action(action);
	ft_printf("\n********TRAITEMENT****************\n");	
	clean_list_rra_ra(&action);
	ft_printf("\n***********OUTPUT*****************\n");	
	ft_put_action(action);

	ft_dell_list_action(&action);
	*/
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
		//		test_rotat(list_a, option);
		test_put_elem(list_a, option);
		//		run_sort_1(list_a, option);
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
