/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_index_action.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 18:49:05 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/15 15:56:49 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		ft_get_index_action(char *str,char *actions_name[11])
{
	int			 index;

	index = 0;
	while (index < 22)
	{
		ft_printf("lecture de >%s< comparaison avec >%s<"
				"index %d\n", str, actions_name[index], index);
		if (!ft_strcmp(str, actions_name[index]))
			return (index);
		else
		{
			index++;
			ft_printf("{yellow}KO essaye avec l'index %d{eoc}\n", index);
		}
	}
	return(-1);
}
