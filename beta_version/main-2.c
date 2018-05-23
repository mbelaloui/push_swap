/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main-2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 16:58:46 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/23 14:51:07 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/inc/push_swap.h"

int			main(void)
{
	intmax_t tab[] = {6,5,4,3,2,1,0,-1,-2,-3,-4,-5,-6,-7,-8};
	t_int_list *list;

	list = NULL;
	ft_put_int_list(list);

	list = ft_tab_to_int_list(tab, sizeof(tab) / sizeof(intmax_t));

	printf(" med  %d size / 2 = %zu \n",
			(int)ft_med_int_list(list),
			ft_size_int_list(list) / 2);
	ft_clear_int_list(&list);



	long double avg = 0.0;

	ft_avg_tab(tab, &avg, sizeof(tab) / sizeof(intmax_t));
	printf(" avg tab = %Lf ", avg);
	printf(" med  %d size / 2 = %zu ",
			(int)ft_med_tab(tab, sizeof(tab) / sizeof(intmax_t)),
			(sizeof(tab) / sizeof(intmax_t)) / 2);
	ft_clear_int_list(&list);

	/*	
		ft_put_intmax_tab(tab, sizeof(tab));
		ft_bubble_sort_tab(tab, sizeof (tab));
		ft_put_int_tab(tab, sizeof(tab));
		ft_mergesort_tab(tab, (sizeof(tab) / sizeof(intmax_t)));
		ft_put_intmax_tab(tab, sizeof(tab));
		*/	
/*	ft_put_intmax_tab(tab, sizeof(tab));
	list = ft_tab_to_int_list(tab, sizeof(tab));
	ft_put_int_list(list);
	ft_mergesort_int_list(&list, ft_size_int_list(list));
	ft_put_int_list(list);
*/
	/*
	   ft_put_int_list(list);
	   ft_bubble_sort_int_list(&list);
	   ft_put_int_list(list);

	   ft_dell_elem_int_list(5, &list);
	   ft_put_int_list(list);

	   ft_printf("index = 1 -- %d\n", ft_dell_index_int_list(1, &list));
	   ft_put_int_list(list);
	   ft_printf("index = 0 -- %d\n", ft_dell_index_int_list(0, &list));
	   ft_put_int_list(list);
	   */



	/*	ft_printf("index = -1 -- %d\n", ft_dell_index_int_list(-1, &list));
		ft_put_int_list(list);
		ft_printf("index = 20 -- %d\n", ft_dell_index_int_list(20, &list));
		ft_put_int_list(list);
		ft_printf("index = 2 -- %d\n", ft_dell_index_int_list(2, &list));
		ft_put_int_list(list);
		ft_printf("index = 8 -- %d\n", ft_dell_index_int_list(8, &list));
		ft_put_int_list(list);
		*/
	//	ft_clear_int_list(&list);
	/*	t_int_list *list;

		list = NULL;
		ft_put_int_list(list);
		ft_put_int_list(list);

		ft_printf("index = 0 -- %d\n",ft_add_elem_int_list(0, 2, &list));
		ft_put_int_list(list);

		ft_printf("index = 1 -- %d\n",ft_add_elem_int_list(1, 3, &list));
		ft_put_int_list(list);

		ft_printf("index = 0 -- %d\n",ft_add_elem_int_list(0, 4, &list));
		ft_put_int_list(list);

		ft_printf("index = 0 -- %d\n",ft_add_elem_int_list(0, 7, &list));
		ft_put_int_list(list);

		ft_printf("index = 0 -- %d\n",ft_add_elem_int_list(4, 9, &list));
		ft_put_int_list(list);
		*/
	return (0);
}
