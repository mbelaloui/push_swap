/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 16:56:26 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/17 16:57:29 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		ft_print_error(BOOL show_error)
{
	if (show_error)
		write(2, "Error\n", 6);
	else
		ft_print_usage();
	return (1);
}
