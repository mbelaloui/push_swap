/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isempty.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 05:07:02 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/11 20:58:35 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/str.h"

BOOL		ft_isempty(const char *str)
{
	if (!str)
		return (T);
	while (*str)
	{
		if (!ft_isblank(*str))
			break ;
		str++;
	}
	return ((*str) ? F : T);
}
