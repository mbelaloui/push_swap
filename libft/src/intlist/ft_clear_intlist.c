/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_int_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 11:34:54 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/06 08:38:50 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/list.h"

/*
** pas besoin de faire le deplacement de pointeur il ce fait automatiquement
*/

BOOL	ft_clear_intlist(t_int_list **list)
{
	if (list && *list)
	{
		while (*list)
			ft_dell_bgn_int_list(list);
		return (T);
	}
	return (F);
}
