/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 16:56:26 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/05 11:41:46 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		ft_print_error(BOOL show_error, t_options option)
{
	if (show_error)
		write(2, "Error\n", 6);
	else
		ft_print_usage(option);
	return (1);
}
