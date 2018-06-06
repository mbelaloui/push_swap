/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_help.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 15:39:50 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/05 11:37:25 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		ft_print_help(void)
{
	ft_printf("help : push swap is a program that sort a heap.to continue\n\n");
	ft_printf("\t-a\tshow actions recognized by the program.\n");
	ft_printf("\t-c\tput colors :\n");
	ft_printf("\t\t * actions of the battery A in {YELLOW}YELLOW{EOC}.\n");
	ft_printf("\t\t * actions of the battery B in {CYAN}BLUE{EOC}.\n");
	ft_printf("\t\t * and actions which concerns the two batteries in"
			" {GREEN}GREEN{EOC}.\n");
	ft_printf("\t-d\tshow more details of execution.\n");
	ft_printf("\t-h\tshow this message.\n");
	ft_printf("\t-l\tlet input be superior to int values.\n");
	ft_printf("\t-t\topen test mode.\n");
	return (T);
}
