/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_action_name.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 18:46:15 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/19 16:29:45 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_init_actions_name(char **actions_name)
{
	actions_name[SA] = "sa";
	actions_name[SB] = "sb";
	actions_name[SS] = "ss";
	actions_name[PA] = "pa";
	actions_name[PB] = "pb";
	actions_name[RA] = "ra";
	actions_name[RB] = "rb";
	actions_name[RR] = "rr";
	actions_name[RRA] = "rra";
	actions_name[RRB] = "rrb";
	actions_name[RRR] = "rrr";
	actions_name[SA + 11] = "{YELLOW}sa{EOC}";
	actions_name[SB + 11] = "{CYAN}sb{EOC}";
	actions_name[SS + 11] = "{GREEN}ss{EOC}";
	actions_name[PA + 11] = "{YELLOW}pa{EOC}";
	actions_name[PB + 11] = "{CYAN}pb{EOC}";
	actions_name[RA + 11] = "{YELLOW}ra{EOC}";
	actions_name[RB + 11] = "{CYAN}rb{EOC}";
	actions_name[RR + 11] = "{GREEN}rr{EOC}";
	actions_name[RRA + 11] = "{YELLOW}rra{EOC}";
	actions_name[RRB + 11] = "{CYAN}rrb{EOC}";
	actions_name[RRR + 11] = "{GREEN}rrr{EOC}";
}
