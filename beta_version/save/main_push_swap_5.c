/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 17:33:10 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/29 19:50:29 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	test_rotat(t_int_list *list_a, t_options *option)
{
	t_int_list *list_b;
	t_charlist	*action = NULL;

	list_b = NULL;
	if (option->d)
		ft_put_tow_piles(list_a, list_b);

	//	ft_add_charlist("AAAA", &action);

	ft_rotat_down_stack_a(&list_a, 1, &action);
	if (option->d)
		ft_put_tow_piles(list_a, list_b);
	ft_rotat_up_stack_a(&list_a, 1, &action);
	if (option->d)
		ft_put_tow_piles(list_a, list_b);


	ft_rotat_down_stack_b(&list_b, 1, &action);
	if (option->d)
		ft_put_tow_piles(list_a, list_b);
	ft_rotat_up_stack_b(&list_b, 1, &action);
	if (option->d)
		ft_put_tow_piles(list_a, list_b);


	/*
	   ft_rotat_up_stack_b(&list_a,list_b, option, 1, &action);
	   ft_rotat_down_stack_b(&list_a,list_b, option, 1, &action);

	   ft_rotat_down_stack_a(&list_a,list_b, option, 3, &action);
	   ft_rotat_up_stack_a(&list_a,list_b, option, 3, &action);
	   */
	ft_printf("\n***********INPUT******************\n");	
	ft_put_list_charlist(action);
	ft_printf("\n********TRAITEMENT****************\n");	
	ft_clean_list_rra_ra(&action);
	ft_printf("\n***********OUTPUT*****************\n");	
	ft_put_list_charlist(action);

	//	ft_dell_list_charlist(&action);
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
			//			ft_printf(" 465\n");
			ft_add_charlist("pb", &action);
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
		ft_add_charlist("sa", &action);
		//				ft_printf("sa\n");
		ft_intervert_head_int_list(&list_a);
		if (option->d)
			ft_put_tow_piles(list_a, list_b);
	}


	while (list_b)
	{

		int index;

		//	ft_printf("\n len list = %d\n", ft_size_int_list(list_a));

		index = ft_get_position_in_list(list_a, list_b->data);
		//	ft_printf("  index = %d \n ", index);
		if ( index <=  sizelist / 2 )
		{
			index = (!index) ? 1 : index;
			//		ft_printf("\n 1 index = %d\n", index);
			ft_rotat_up_stack_a(&list_a, index, &action);
			if (option->d)
				ft_put_tow_piles(list_a, list_b);
		}else
		{
			//		ft_printf("\n 2 index = %d\n", index);
			if (index % 2)  
				index = (index == sizelist) ? 0 : (sizelist  - index - 1);
			else
				index = (index == sizelist) ? 0 : (sizelist  - index);
			//		ft_printf("\n 2 index = %d\n", index);
			//			ft_rotat_down_stack_a(&list_a,list_b, option, index , &action);
			/*		if (option->d)
					ft_put_tow_piles(list_a, list_b);
					*/	}

			ft_printf("pa");
			ft_add_charlist("pa", &action);

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
		//		ft_rotat_up_stack_a(&list_a,list_b, option, ind, &action);
		if (option->d)
			ft_put_tow_piles(list_a, list_b);
	}else
	{
		//		ft_printf("\n 2 index = %d \n", ind);

		//		ft_rotat_down_stack_a(&list_a,list_b, option, ind - (sizelist/2) + 2, &action);
		if (option->d)
			ft_put_tow_piles(list_a, list_b);
	}


	ft_put_list_charlist(action);



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

void	first_phase(t_int_list **list_a, t_int_list **list_b, t_options *option,
		t_charlist **action)
{
	/*	*/if (option->d)
		ft_put_tow_piles(*list_a, *list_b);

	int			sizelist;
	long double	med;
	
	ft_med_int_list(*list_a, &med);
	sizelist = ft_size_int_list(*list_a);
	
intmax_t val;


	while (sizelist > 2)// && !ft_is_sorted_asc_int_list(*list_a))
	{
		if ((*list_a)->data <= (intmax_t)med)
		{
			ft_add_charlist("pb", action);
			ft_push_first_to_list(list_a, list_b);
			if (option->d)
				ft_put_tow_piles(*list_a, *list_b);
		}
		else
		{
			ft_rotat_down_stack_a(list_a, 1, action);
			if (option->d)
				ft_put_tow_piles(*list_a, *list_b);
		}

		ft_get_val_intlist(*list_a, ft_get_index_min_int_list(*list_a), &val);
		if (val > med)
		{
	ft_med_int_list(*list_a, &med);
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

	int index;
	while (*list_b)
	{

		intmax_t val = (*list_b)->data;
		index = ft_get_position_in_list(*list_a, val);

		/*	ft_printf("la valeur <%ld> doit etre a cette index %d\n",
			val, index);

			if (ft_get_val_intlist(*list_a,index - 1, &prec))
			ft_printf(" just apres >%ld< ", prec);
		//test_rotat(*list_a,option);
		if (ft_get_val_intlist(*list_a,index, &prec))
		ft_printf(" et avant  >%ld\n ", prec);
		*/
		if (index <= ft_size_int_list(*list_a) / 2)
		{
			ft_rotat_up_stack_a(list_a, index, &action);
			if (option->d)
				ft_put_tow_piles(*list_a, *list_b);
		}
		else
		{
			ft_rotat_down_stack_a(list_a, ft_size_int_list(*list_a) - index, &action);
			if (option->d)
				ft_put_tow_piles(*list_a, *list_b);
		}

		ft_add_charlist("pa", &action);
		ft_push_first_to_list(list_b, list_a);
		if (option->d)
			ft_put_tow_piles(*list_a, *list_b);
	}	

	index = 	ft_get_index_min_int_list(*list_a);
	if (index <= ft_size_int_list(*list_a) / 2)
	{
		ft_rotat_up_stack_a(list_a, index, &action);
		if (option->d)
			ft_put_tow_piles(*list_a, *list_b);
	}
	else
	{
		ft_rotat_down_stack_a(list_a, ft_size_int_list(*list_a) - index, &action);
		if (option->d)
			ft_put_tow_piles(*list_a, *list_b);
	}




	/*	ft_rotat_up_stack_a(list_a, index, &action);
		if (option->d)
		ft_put_tow_piles(*list_a, *list_b);
		*/



}

void	run_sort(t_int_list *list_a, t_options *option)
{
	t_int_list *list_b;
	t_charlist	*action;
	t_charlist	*head_action;

	action = NULL;
	list_b = NULL;
	first_phase(&list_a,&list_b, option, &action);
	second_pahse(&list_a,&list_b, option, action);
	ft_put_list_charlist(action);
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
