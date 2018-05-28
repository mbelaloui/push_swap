/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_nbr_deplassement.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:04:31 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/28 12:04:59 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/action.h"

int		ft_get_nbr_deplassement(int first, int last, int size_list)
{	
	int nbr_deplassement_f;
	int nbr_deplassement_l;

	nbr_deplassement_l = ft_min(last, size_list - last);
	nbr_deplassement_f = ft_min(first, size_list - first);

	/*ft_printf( " nbr_deplassement_f =%d , nbr_deplassement	_l =%d \n",
	 *		nbr_deplassement_f, nbr_deplassement_l);
	 *			 */
	/*if (nbr	_deplassement_f == nbr_deplassement_l)
	 *		return ((ft_getval_int_list(first) > ft_getval_int_list(first)) ? UP : DW);
	 *			 */
	/******************/


	return ((nbr_deplassement_f < nbr_deplassement_l) // le decalage de l'indice est prit en compt ici
			?nbr_deplassement_f : nbr_deplassement_l);
}
