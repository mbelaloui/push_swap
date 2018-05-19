/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_usage.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 18:54:31 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/15 15:46:29 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_print_usage(void)
{
	ft_printf("Usage: ./Push-swap <optional>[-acdhlt]"
			" <obligatory>[∃! n ∈ [ℤ] | n >= MIN_INT && n <= MAX_INT]\n");
}
