/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_v2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 11:39:50 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/10 21:15:47 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/nbr.h"

long				ft_atoi_v2(const char *str)
{
	int		signe;

	signe = (*str == '-') ? -1 : 1;
	return (signe * ft_base_to_decimal_v2(str, 10));
}
