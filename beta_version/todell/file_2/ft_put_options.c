/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_options.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 11:33:15 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/18 12:49:25 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_put_options(t_options *option)
{
	ft_printf(" a is activated %d \n", (option->a) ? 1 : 0);
	ft_printf(" c is activated %d \n", (option->c) ? 1 : 0);
	ft_printf(" d is activated %d \n", (option->d) ? 1 : 0);
	ft_printf(" h is activated %d \n", (option->h) ? 1 : 0);
	ft_printf(" l is activated %d \n", (option->l) ? 1 : 0);
	ft_printf(" t is activated %d \n", (option->t) ? 1 : 0);
}
