/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_int_tab.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 15:16:11 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/16 15:13:34 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/*
** ft_printf("je doit valider cette partie de str ou normaleent il
** y a que des num\n" "<%s>\n",param );
**
**	ft_printf(" ce qui reste <%s> index = %d    param[%d] = %c\n",param "
**", index, index , param[index]);
**	ft_printf("  <%s> index = %d\n",param , index);
*/

BOOL	ft_is_valid_int_tab(char *param)
{
	size_t index;

	index = 0;
	if (ft_isempty(param))
		return (F);

	//ft_printf(">%s>\n", param);

	index = (param[index] == '-' || param[index] == '+') ? 1 : 0;
	while (param[index]
			&& (ft_isdigit(param[index]) || ft_isblank(param[index])
				|| ((param[index] == '-' || param[index] == '+')
					&& ft_isblank(param[index - 1])
					&& ft_isdigit(param[index + 1]))))
		index++;


	if (param[index])
		return (F);
	return (T);
}
