/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_are_cancel_out_action.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:11:58 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/29 13:16:39 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/action.h"

BOOL	ft_are_cancel_out_action(char *action_a, char *action_b)
{


	if (!ft_strcmp(action_a , "rra") && !ft_strcmp(action_b, "ra"))
		return (T);
	if (!ft_strcmp(action_a , "ra") && !ft_strcmp(action_b, "rra"))
		return (T);
	if (!ft_strcmp(action_a , "rb") && !ft_strcmp(action_b, "rrb"))
		return (T);
	if (!ft_strcmp(action_a , "rrb") && !ft_strcmp(action_b, "rb"))
		return (T);
	/*
	 *	if (!ft_strcmp(action_a , "apb") && !ft_strcmp(action_b, "pa"))
			return (T);
		if (!ft_strcmp(action_a , "pa") && !ft_strcmp(action_b, "pb"))
							return (T);
							*/
	return (F);
}
