/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error_detail.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 16:57:48 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/17 19:38:48 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_print_error_detail(t_options option)
{
	if (option.exist_double)
		ft_printf("element en double ...\n");
	if (option.overflow)
	{
		if (option.l)
			ft_printf("overflow intmax values....\n");
		else
			ft_printf("overflow int values....\n");
	}
}
