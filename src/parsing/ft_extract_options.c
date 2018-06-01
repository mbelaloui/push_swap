/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_options.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 16:58:47 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/01 13:43:05 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static BOOL			ft_is_option(const char option)
{
	if (option == 'a' || option == 'c' || option == 'd' || option == 'h'
			|| option == 'l' || option == 't')
		return (T);
	return (F);
}

static t_options	*ft_set_options(char c, t_options *options)
{
	if (c == 'a')
		options->a = 1;
	else if (c == 'c')
		options->c = 1;
	else if (c == 'd')
		options->d = 1;
	else if (c == 'h')
		options->h = 1;
	else if (c == 'l')
		options->l = 1;
	else if (c == 't')
		options->t = 1;
	return (options);
}

int					ft_extract_options(char *param, t_options *options)
{
	int index;

	index = 0;
	while (param[index])
	{
		if (ft_isdigit(param[index]) ||
				((param[index] == '-' || param[index] == '+')
				&& ft_isdigit(param[index + 1])))
			return (index);
		else if (param[index] == '-' && ft_is_option(param[index + 1]))
		{
			options->opt = 1;
			options = ft_set_options(param[index + 1], options);
			index += 2;
		}
		else if (param[index] == '-' && ft_isalpha(param[index + 1]) &&
				!ft_is_option(param[index + 1]))
			options->invalide_opt = 1;
		else
			return (-1);
		index++;
	}
	return (index);
}
