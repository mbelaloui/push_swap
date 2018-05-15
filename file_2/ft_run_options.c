/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_options.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 11:40:08 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/15 14:30:17 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"


void	ft_run_test_mode()
{
	ft_printf("teste mode starting ....\n");
}

void	ft_affiche_action_spush_swap()
{
	ft_printf("actions\n");
}

int		ft_run_options(t_options option)
{
	if (option.a)
		ft_affiche_action_spush_swap();
	else if (option.h)
		ft_put_helpoption();
	else if (option.t)
		ft_run_test_mode();
	return (0);
}
