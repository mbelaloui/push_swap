/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_id_action.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 19:32:36 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/04 20:05:17 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/*
** get_id_action return {
** index_action when it ok {0 - 22}
** -1 if action is not found
** -2 end of lecture
** -3 ERROR lecture
*/

int		ft_get_id_action(char *actions_name[22], t_int_list *list_a,
		t_int_list *list_b, t_options *option)
{
	int		index;
	char	*action;

	action = NULL;
	if (option->d)
		ft_put_tow_piles(list_a, list_b);
	if ((index = get_next_line(0, &action)) <= 0)
		return ((!index) ? -2 : -3);
	index = ft_get_index_action(action, actions_name);
	ft_strdel(&action);
	return (index);
}
