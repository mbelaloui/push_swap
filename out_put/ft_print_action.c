/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_action.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 18:50:55 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/15 16:06:48 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_print_action(char **actions_name)
{
	int index;
	int max_index;

	index = 0;
	max_index = 11;
	ft_printf(" actions recognized by the program :\n\t[");
	while (index < max_index)
	{
		if (index == 0 || index == 3 || index == 5 || index == 8)
			ft_printf("{yellow}%s{eoc}",actions_name[index]);
		if (index == 1 || index == 4 || index == 6 || index == 9)
			ft_printf("{cyan}%s{eoc}",actions_name[index]);
		if (index == 2 || index == 7 || index == 10)
			ft_printf("{green}%s{eoc}",actions_name[index]);
		if (index + 1 < max_index)
			ft_printf(", ");
		else
			ft_printf("].\n");
		index++;
	}
}
