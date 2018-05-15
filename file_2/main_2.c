#include "test.h"

int		main(int argc, char **argv)
{
	void	(*actions_tab[11])(int index,int ind);
	char	*actions_name[22];
	int		index;
	char 	*str;

	ft_init_actions_tab(actions_tab);
	ft_init_actions_name(actions_name);
	while (1)//parcour de la liste d'arguments
	{
		str =NULL;
		get_next_line(1 ,&str);
//		index = get_index_action(str,actions_name);// dans le checker
//		index = (index > 11 ) ? index - 11 : index;
//		(index == -1) ?	ft_printf("{red}ERROR {eoc}\n") :	(actions_tab[index])(index, index); // dans le checker


		ft_printf("str = %s  index = %d action = ",str,ft_atoi(str));
		ft_printf(ft_get_name_action(actions_name, ft_atoi(str)));//   pour push swap if (option.c index = index + 11)
		ft_printf("\n");
		ft_strdel(&str);
		ft_print_usage();
		ft_print_action(actions_name);
	}
	return (0);
}
//dans checker j'ai le nom et je doit touver l'indece
//dans push swap j'ai l'indece je doit trouver le nom
