/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 15:45:07 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/19 19:48:08 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../../../libft/inc/libft.h"

# define SA		0
# define SB		1
# define SS		2
# define PA		3
# define PB		4
# define RA		5
# define RB		6
# define RR		7
# define RRA	8
# define RRB	9
# define RRR	10

typedef struct	s_options
{
	int			opt :1;
	int			invalide_opt : 1;
	int			a : 1;
	int			c : 1;
	int			d : 1;
	int			h : 1;
	int			l : 1;
	int			t : 1;
	int			exist_double : 1;
	int			overflow : 1;
}				t_options;

/*					menu debug						 */

int				main_debug(void);
int				main_debug_arg(t_int_list *list_a);
void			ft_print_head(t_int_list *list_a, t_int_list *list_b);
void			ft_add_menu(t_int_list **list_a, t_int_list **list_b);
void			ft_dell_menu(t_int_list **list_a, t_int_list **list_b);
void			ft_init_menu(t_int_list **list_a, t_int_list **list_b);
void			ft_push_menu(t_int_list **list_a, t_int_list **list_b);
void			ft_print_menu(t_int_list *list_a, t_int_list *list_b);
void			ft_search_menu(t_int_list **list_a, t_int_list **list_b);
void			ft_shift_down_menu(t_int_list **list_a, t_int_list **list_b);
void			ft_shift_down_two_list(t_int_list **list_a,
		t_int_list **list_b);
void			ft_shift_up_menu(t_int_list **list_a, t_int_list **list_b);
void			ft_shift_up_two_list(t_int_list **list_a, t_int_list **list_b);
void			ft_swap_menu(t_int_list **list_a, t_int_list **list_b);
void			ft_swap_two_list(t_int_list **list_a, t_int_list **list_b);

/*						message programe						 */

void			ft_end_msg_check(t_options *option, int index,
		t_int_list *list_a, t_int_list *list_b);
int				ft_invalide_parametre(t_options option);
void			ft_print_action(char **actions_name);
int				ft_print_error(BOOL show_error);
void			ft_print_error_detail(t_options option);
int				ft_print_help();
void			ft_print_usage(void);
void			ft_tell_ok(t_options *option);
void			ft_tell_ko(t_options *option, t_int_list *list_a,
		t_int_list *list_b);

/*							parsing									*/

BOOL			ft_add_end_values_int_list(char *line, t_int_list **list_valeur,
		t_options *option);
int				ft_extract_options(char *str, t_options *options);
BOOL			ft_is_param_valid(char *param, t_options *option, int *index);
BOOL			ft_is_valid_int_tab(char *param);

/*																	*/
void	ft_run_ckecker(t_int_list *list_a, t_options *option,
		BOOL (*actions_tab[11])(), char *actions_name[22]);

void	ft_init_actions_tab(BOOL (*actions_tab[11])(t_int_list **list_a,
			t_int_list **list_b));
int		ft_get_index_action(char *str, char *actions_name[11]);
void	ft_run_ckecker(t_int_list *list_a, t_options *option,
		BOOL (*actions_tab[11])(), char *actions_name[22]);
int		ft_get_id_action(char *actions_name[22], t_int_list *list_a,
		t_int_list *list_b, t_options *option);
void	ft_init_actions_name(char **actions_name);
void	ft_test_mode(void);

#endif
