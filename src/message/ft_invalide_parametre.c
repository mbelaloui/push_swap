/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_invalide_parametre.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 16:58:57 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/19 17:06:32 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		ft_invalide_parametre(t_options option)
{
	char	*actions_name[22];

	if (option.h)
		ft_print_help();
	else if (option.a)
	{
		ft_init_actions_name(actions_name);
		ft_print_action(actions_name);
	}
	else if (option.t)
		main_debug();
	else
	{
		ft_print_error(T);
		if (option.d)
			ft_printf("invalide format of parametres or caracter"
					" in the parametre...\n");
		ft_print_usage();
	}
	return (1);
}
