/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main-2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 16:58:46 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/28 15:40:23 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/inc/push_swap.h"

int			main(void)
{
	intmax_t tab[] = {90,50,9,8,7,6,5,4,3,2,1,900,0,-1,-2,-3,-4,-5,-6,800,-7,-8};
/*	t_int_list *list;

	ft_put_intmax_tab(tab, sizeof(tab));

	list = NULL;
	ft_put_int_list(list);

	list = ft_tab_to_int_list(tab, sizeof(tab));

	long double med;
			
	ft_med_int_list(list, &med);
	printf(" med  %Lf\t\tsize / 2 = %zu \n", med, ft_size_int_list(list) / 2);

	long double avg = 0.0;

	ft_avg_tab(tab, &avg, sizeof(tab));
	printf(" avg tab = %Lf\n", avg);
	printf(" med  %Lf\t\tsize / 2 = %zu\n", ft_med_tab(tab, sizeof(tab)),
			(sizeof(tab) / sizeof(intmax_t)) / 2);

	fflush(stdout);

	intmax_t index = 0;
	ft_put_int_list(list);
	ft_printf(" size list = %d\n", ft_size_int_list(list));
	
	index = ft_get_index_max_int_list(list);
	ft_printf("index max dans la list = %d\n", index);

	index = ft_get_index_min_int_list(list);
	ft_printf("index min dans la list = %d\n", index);

	ft_printf("\n************** firest bigger **********************\n");

	intmax_t val = 80;
	index = ft_get_index_first_elem_bigger_intlist(list, val);
	ft_printf("index firest elem bigger than %ld  = %ld\n",val, index);
	ft_get_val_intlist(list, index, &val);
	ft_printf(" val de l'index dans le tab = %ld\n",val);

	ft_printf("\n************** last bigger **********************\n");

	index = ft_get_index_last_elem_bigger_intlist(list, val);
	ft_printf("index last elem bigger than %ld  = %ld\n",val, index);
	ft_get_val_intlist(list, index, &val);
	ft_printf(" val de l'index dans le tab = %ld\n",val);

	ft_clear_int_list(&list);
*/
	t_charlist *head;
	ft_put_charlist(head);
	ft_put_list_charlist(head);
	head = ft_new_charlist("action 1");
	
	ft_put_list_charlist(head);
	ft_printf("\n************** **********************\n");

	ft_add_charlist(NULL, &head);
	ft_put_list_charlist(head);
	ft_printf("\n************** *********************\n");

	ft_add_charlist("elem 2", &head);
	ft_put_list_charlist(head);
	ft_printf("is empty %d", ft_isempty_charlist(head));

	ft_dell_list_charlist(&head);

	ft_printf("is empty %d", ft_isempty_charlist(head));

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
