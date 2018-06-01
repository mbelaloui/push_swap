/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_option.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:18:46 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/01 17:26:14 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void	ft_init_option(t_options *opt)
{
	opt->opt = 0;
	opt->invalide_opt = 0;
	opt->a = 0;
	opt->c = 0;
	opt->d = 0;
	opt->h = 0;
	opt->l = 0;
	opt->t = 0;
	opt->exist_double = 0;
	opt->overflow = 0;
	opt->pres = 0;

}
