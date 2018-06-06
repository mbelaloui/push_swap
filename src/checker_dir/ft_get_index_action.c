/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_index_action.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 10:26:53 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/05 12:31:27 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/*
**		ft_printf("lecture de >%s< comparaison avec >%s<"
**				"index %d\n", str, actions_name[index], index);
**		ft_printf("{yellow}KO essaye avec l'index %d{eoc}\n", index);
*/

int		ft_get_index_action(char *str, char *actions_name[11])
{
	int		index;

	index = 0;
	while (index < 22)
	{
		if (!ft_strcmp(str, actions_name[index]))
			return (index);
		else
			index++;
	}
	return (-1);
}
