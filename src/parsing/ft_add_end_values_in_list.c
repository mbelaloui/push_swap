/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_end_values_in_list.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 16:51:41 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/01 17:01:22 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/*
** intmax_t	t_atointmax(const char *str)
** {
** int signe;
** int pt;
**
** ft_printf("{red}1 [%s] {eoc}\n", str);
** signe = (*str == '-') ? -1 : 1;
** pt = (*str == '-' || *str == '+') ? 1 : 0;
** ft_printf("{green}2 [%s] {eoc}", str);
** return (signe * ft_base_to_decimal(str + pt, 10));
** }
**
**   le -1 pour tester s'il est valide c'est pour les negatif
**
** if (size_nbr > 19 &&    voir le signe de la valeur s'il change cela veux
** dire qu'il a depaser** la valeur max  line[pt - size_nbr])
*/

static BOOL	is_overlow(char *line, intmax_t val, t_options option)
{
	if (option.l)
		return (ft_is_overflow_intmax(line));
	else
		return (((MIN_INT <= val) && (val <= MAX_INT)) ? F : T);
}

BOOL		ft_add_end_values_int_list(char *line, t_int_list **list_valeur,
		t_options *option)
{
	int			pt;
	intmax_t	val;
	int			size_nbr;

	pt = 0;
	if (!list_valeur)
		return (F);
	while (line[pt])
	{
		val = ft_atointmax(line + pt);
		if (line[pt] == '-' || line[pt] == '+')
			pt++;
		if (ft_is_in_int_list(val, *list_valeur))
			return ((option->exist_double = 1) && F);
		else if (!ft_add_end_intlist(val, list_valeur))
			return (F);
		size_nbr = 0;
		while (line[pt] && ft_isdigit(line[pt++]))
			size_nbr++;
		if (is_overlow(line + pt - size_nbr - 1, val, *option))
			return ((option->overflow = 1) && F);
	}
	return (T);
}
