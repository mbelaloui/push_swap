/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tel_ok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 18:51:23 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/05 11:35:37 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_tell_ok(t_options *option)
{
	ft_printf("OK\n");
	if (option->d)
		ft_printf("pile A is sorted and pile b is empty\n");
}
