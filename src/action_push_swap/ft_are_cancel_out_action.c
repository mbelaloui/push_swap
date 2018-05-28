/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_are_cancel_out_action.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:11:58 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/28 12:27:21 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/action.h"

BOOL	ft_are_cancel_out_action(char *action_a, char *action_b)
{
	if (!ft_strcmp(action_a , "rra\n") && !ft_strcmp(action_b, "ra\n"))
		return (T);
	if (!ft_strcmp(action_a , "ra\n") && !ft_strcmp(action_b, "rra\n"))
		return (T);
	if (!ft_strcmp(action_a , "rb\n") && !ft_strcmp(action_b, "rrb\n"))
		return (T);
	if (!ft_strcmp(action_a , "rrb\n") && !ft_strcmp(action_b, "rb\n"))
		return (T);
	/*
	 *	if (!ft_strcmp(action_a , "apb\n") && !ft_strcmp(action_b, "pa\n"))
			return (T);
		if (!ft_strcmp(action_a , "pa\n") && !ft_strcmp(action_b, "pb\n"))
							return (T);
							*/
	return (F);
}
