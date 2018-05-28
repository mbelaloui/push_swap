/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_nbr_move_to_push.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:05:25 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/28 12:06:12 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/action.h"

int		ft_get_nbr_move_to_push(t_int_list *list, intmax_t elem)
{
	int nbr_move;

	nbr_move = 0;
	while (list)
	{
		ft_printf(" elem = 	%ld \t list = %ld\t nbr_move push = %d\n", elem, list->data, nbr_move );
		if (list->data == elem)
			return (nbr_move);
		nbr_move++;
		list = list->next;
	}
	return (-1);
}
