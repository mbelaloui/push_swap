/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_usage.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 18:54:31 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/05 11:35:06 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_print_usage(t_options option)
{
	if (option.l)
	{
		ft_printf("Usage: ./Push-swap <optional>[-acdhlt]"
				" <obligatory>[∃! n ∈ [ℤ] | n >= MIN_LONG && n <= MAX_LONG]\n");
	}
	else
		ft_printf("Usage: ./Push-swap <optional>[-acdhlt]"
			" <obligatory>[∃! n ∈ [ℤ] | n >= MIN_INT && n <= MAX_INT]\n");
}
