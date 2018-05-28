/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_option.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:18:46 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/28 17:23:32 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/action.h"

void	ft_init_option(t_options *opt)
{
	opt->a = 0;
	opt->c = 0;
	opt->d = 0;
	opt->h = 0;
	opt->l = 0;
	opt->t = 0;
}
