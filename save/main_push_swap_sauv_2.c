/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 17:33:10 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/30 10:22:33 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"



int		ft_get_index_min_int_list(const t_int_list *list)
{
   int			index;
   int			index_min;
   intmax_t	min;

   index = 0;
   index_min = 0;
   if (!list)
      return (0);
   min = list->data;
   while (list)
   {
      if (list->data < min)
      {
         index_min = index;
         min = list->data;
      }
      list = list->next;
      index++;
   }
   return (index_min);
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

intmax_t	ft_get_first_elem_bigger_med(t_int_list *list, intmax_t med)
{
   intmax_t index;
   intmax_t index_max;

  // ft_printf("\n first elem big \n");
   if (list)
   {
      index = 0;
      while (list)
      {
     /*    ft_printf("med = %ld, elem = %ld, index %d\n",
               med, list->data, index);
       */  if (list->data > med)
         {
     //       ft_printf("retunred  index %d\n", index);
            return (index);
         }
         index++;
         list = list->next;
      }
   }
   return (-1);
}


intmax_t	ft_get_last_elem_bigger_med(t_int_list *list, intmax_t med)
{
   intmax_t index;
   intmax_t max_index;

   //ft_printf("\n last elem big \n");

   max_index = -1;
   if (list)
   {
      index = 0;
      while (list)
      {
      /*   ft_printf("med = %ld, elem = %ld, index %d  index_max %d\n",
               med, list->data, index, max_index);
    */     if (list->data > med)
            max_index = index;
         index++;
         list = list->next;
      }
   }
 //  ft_printf("retun = index_max %d\n",      max_index);
   return (max_index);
}





























void  ft_rotat_down_stack_b(t_int_list **list_b, t_int_list *list_a, t_options *option, int nbr_rotations)
{
	while (nbr_rotations > 0)
   {
   	ft_printf("rrb\n");
		ft_shift_bottom_int_list(list_b);
      if (option->d)
      	ft_put_tow_piles(list_a, *list_b);
      nbr_rotations--;
	}
}

void  ft_rotat_up_stack_b(t_int_list **list_b, t_int_list *list_a, t_options *option, int nbr_rotations)
{
   while (nbr_rotations > 0)
   {
      ft_printf("rb\n");
      ft_shift_top_int_list(list_b);
      if (option->d)
         ft_put_tow_piles(list_a, *list_b);
      nbr_rotations--;
   }
}





void  ft_rotat_down_stack(t_int_list **list_a, t_int_list *list_b, t_options *option, int nbr_rotations)
{
	while (nbr_rotations > 0)
   {
   	ft_printf("rra\n");
		ft_shift_bottom_int_list(list_a);
      if (option->d)
      	ft_put_tow_piles(*list_a, list_b);
      nbr_rotations--;
	}
}

void  ft_rotat_up_stack(t_int_list **list_a, t_int_list *list_b, t_options *option, int nbr_rotations)
{
   while (nbr_rotations > 0)
   {
      ft_printf("ra\n");
      ft_shift_top_int_list(list_a);
      if (option->d)
         ft_put_tow_piles(*list_a, list_b);
      nbr_rotations--;
   }
}



int	get_best_path(int first, int last, int size_list,t_int_list *list)
{
	intmax_t val_f;
	intmax_t val_l;

	int nbr_deplassement_f;
	int nbr_deplassement_l;
	
	nbr_deplassement_l = ft_min(last, size_list - last);
	nbr_deplassement_f = ft_min(first, size_list - first);

/*	ft_printf( " nbr_deplassement_f =%d , nbr_deplassement_l =%d \n",
		nbr_deplassement_f, nbr_deplassement_l);
*//*
	
	if (nbr_deplassement_f == nbr_deplassement_l)
	{

		ft_getval_int_list(list, first -1 , &val_f);
		ft_getval_int_list(list, last - 1, &val_l);
	
		ft_printf( " val_f =%ld , val_l =%ld \n",val_f, val_l);

	return ((val_f > val_l) ? UP : DW);
}
*/	return ((nbr_deplassement_f < nbr_deplassement_l) 
	? 	UP : DW);
}

int	get_nbr_deplassement(int first, int last, int size_list)
{
	int nbr_deplassement_f;
	int nbr_deplassement_l;
	
	nbr_deplassement_l = ft_min(last, size_list - last);
	nbr_deplassement_f = ft_min(first, size_list - first);

/*	ft_printf( " nbr_deplassement_f =%d , nbr_deplassement_l =%d \n",
		nbr_deplassement_f, nbr_deplassement_l);
*/	
/*	if (nbr_deplassement_f == nbr_deplassement_l)
		return ((ft_getval_int_list(first) > ft_getval_int_list(first)) ? UP : DW);
*/
/******************/

	
	return ((nbr_deplassement_f < nbr_deplassement_l) // le decalage de l'indice est prit en compt ici
	?	nbr_deplassement_f : nbr_deplassement_l);
}


int	get_nbr_move_to_push(t_int_list *list, intmax_t elem)
{
	int nbr_move;

	nbr_move = 0;
	while (list)
	{
//		ft_printf(" elem = %ld \t list = %ld\t nbr_move push = %d\n", elem, list->data, nbr_move );	
		if (list->data == elem)
			return (nbr_move);
		nbr_move++;
		list = list->next;
	}	
	return (-1);
}

int	get_nbr_move_to_put(t_int_list *list, intmax_t elem)
{
	int nbr_move;

	nbr_move = 0;
	while (list)
	{
//		ft_printf("elem = %ld \t list = %ld\t nbr_move put = %d\n", elem, list->data, nbr_move);

		if (list->data > elem)
				return (nbr_move);
			nbr_move++;
			list = list->next;
	}	
	return (nbr_move);
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

   list_b = NULL;
   sizelist = ft_size_int_list(list_a);
   if (option->d)
      ft_put_tow_piles(list_a, list_b);
   while (sizelist > 2)
   {
//	med =  ft_med_int)list(list)a);
    //  ft_avg_int_list(list_a, &avg);
   //   med = (intmax_t)avg;
//
//   	   while ((index_max = ft_get_first_elem_bigger_med(list_a, med)) > -1)
 /* while (1)
  {
	first_index_max = ft_get_first_elem_bigger_med(list_a, med);

	if (first_index_max ==  -1)
		break;
  
       last_index_max = ft_get_last_elem_bigger_med(list_a, med);
        if (option->d)
            ft_printf("med = %ld, first_index_max %d, last_index_max = %ld,"
				" size_list = %d\n", med,first_index_max, last_index_max, sizelist);
	
int nbr_rotations =	get_nbr_deplassement(first_index_max, last_index_max, sizelist);
int direction = get_best_path(first_index_max, last_index_max, sizelist, list_a);

		if (direction == DW)
			ft_rotat_down_stack(&list_a,list_b, option, nbr_rotations);
		else //(direction == UP)
			ft_rotat_up_stack(&list_a,list_b, option, nbr_rotations);
*/
		if (!ft_is_sorted_asc_int_list(list_a))
	   {
			ft_printf("pb\n");
			ft_push_first_to_list(&list_a, &list_b);
			if (option->d)
				ft_put_tow_piles(list_a, list_b);
		}
/*			first_index_max = 0;
	}
*/  
			sizelist = ft_size_int_list(list_a);
}
 if (!ft_is_sorted_asc_int_list(list_a))//)
       {
	   	    ft_printf("sa\n");
	      	 ft_intervert_head_int_list(&list_a);
	   	    if (option->d)
   			    ft_put_tow_piles(list_a, list_b);
       }
 

int nbr;
   intmax_t val;

	while (list_b)
	{
		val = list_b->data;
		nbr = get_nbr_move_to_push(list_b, val);
		ft_rotat_up_stack_b(&list_b,list_a, option, nbr);
		nbr = get_nbr_move_to_put(list_a, val);
		ft_rotat_up_stack(&list_a,list_b, option, nbr);
		ft_printf("pa\n");
			ft_push_first_to_list(&list_b, &list_a);
			if (option->d)
				ft_put_tow_piles(list_a, list_b);
		ft_rotat_down_stack(&list_a,list_b, option, nbr);
	}
	
   // find_index_insertion(element first list b)
   // best way to get to the place
   // go to the place
   // pa
   //repeat

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
      run_sort_1(list_a, option);
      ft_clear_int_list(&list_a);
   }
   return (T);
}

void		init_option(t_options *opt)
{
   opt->a = 0;
   opt->c = 0;
   opt->d = 0;
   opt->h = 0;
   opt->l = 0;
   opt->t = 0;
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
   init_option(&option);
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