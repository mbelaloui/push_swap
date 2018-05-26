/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_param_valid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 20:29:13 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/18 12:43:49 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/*
** the first return is for invalide options caracter
** the secand return is for invalide int or intmax parameters
** the third  return is when the parameters are ok
**
**
** ft_printf("index_after_optins {%d},   str =<%s>\n", index_after_optins"
** ", param + index_after_optins);
** index_after_optins = 0;
** ft_printf("il 'aime pas ici");
*/

BOOL	ft_is_param_valid(char *param, t_options *options, int *index)
{
  	int index_after_options;

	if ((index_after_options = ft_extract_options(param, options)) < 0)
		return (F);
	if (!ft_is_valid_int_tab(param + index_after_options))
		return (F);
	*index = index_after_options;
	return (T);
}
