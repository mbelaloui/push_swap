/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_action_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 18:47:44 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/15 15:57:45 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	jour(int i, int c)
{
	ft_printf("{green}action num = %d - %d{eoc}\n", i, c);
}

void	bon(int i)
{
	ft_printf("{green}action num = %d{eoc}\n", i);
}

void	ft_init_actions_tab(void (*actions_tab[11])())
{
	actions_tab[SA] = &bon;
	actions_tab[SB] = &jour;
	actions_tab[SS] = &bon;
	actions_tab[PA] = &jour;
	actions_tab[PB] = &bon;
	actions_tab[RA] = &bon;
	actions_tab[RB] = &jour;
	actions_tab[RR] = &bon;
	actions_tab[RRA] = &bon;
	actions_tab[RRB] = &jour;
	actions_tab[RRR] = &bon;
	//actions_tab[11] = &error_actions;
}
