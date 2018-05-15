/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_param_valid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 20:29:13 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/15 15:47:15 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/*
** the first return is for invalide options caracter
** the secand return is for invalide int or intmax parameters
** the third  return is when the parameters are ok 
**
** 
**	ft_printf("index_after_optins {%d},   str =<%s>\n", index_after_optins, param + index_after_optins);
**	index_after_optins = 0;
**		ft_printf("il 'aime pas ici");
*/

BOOL	ft_is_param_valid(char *param, t_options *options, int *index)//, t_int_list **list)
{
	int index_after_optins;

	if ((index_after_optins = ft_extract_options(param, options) ) < 0)
		return (F);
	if (!ft_is_valid_int_tab(param + index_after_optins))//les ints sont valides
		return (F);
	*index = index_after_optins;
	return (T);
}
