/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_best_path.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:14:44 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/28 12:04:03 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/action.h"

int		ft_get_best_path(int first, int last, int size_list,t_int_list *list)
{
	intmax_t val_f;
	intmax_t val_l;

	int nbr_deplassement_f;
	int nbr_deplassement_l;

	nbr_deplassement_l = ft_min(last, size_list - last);
	nbr_deplassement_f = ft_min(first, size_list - first);

	/*ft_	printf( " nbr_deplassement_f =%d , nbr_deplassement_l =%d \n",
	 *		nbr_deplassement_f, nbr_deplassement_l);
	 *			 *//*

					  if (nbr_deplassement_f == nbr_deplassement_l)
					  {

					  ft_getval_int_list(list, first -1 , &val_f);
					  ft_getval_int_list(list, last - 1, &val_l);

					  ft_printf( " val_f =%ld , val_l =%ld \n",val_f, val_l);

					  return ((val_f > val_l) ? UP : DW);
					  }
					  */return ((nbr_deplassement_f < nbr_deplassement_l)
							  ?		UP : DW);
}