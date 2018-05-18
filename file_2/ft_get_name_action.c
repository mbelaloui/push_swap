/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_name_action.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 18:49:56 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/18 12:48:54 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

char	*get_name_action(char **actions_name, int index)
{
	int max_index;

	max_index = 22;
	if (!(index > -1 && index < max_index))
		return (NULL);
	return (actions_name[index]);
}
