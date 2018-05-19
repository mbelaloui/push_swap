/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 12:49:26 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/19 15:08:07 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	inter(t_int_list **list_a, t_int_list **list_b)
{
	char *line;
	intmax_t nbr;

	ft_clear_scr();
	ft_printf("les listes avant \n ");
	ft_put_tow_piles(*list_a, *list_b);
	ft_printf("veillez choisir une liste A/B tout autre chois "
			"pour revemir au menu > ");
	get_next_line(0, &line);
	if (!ft_strcmp(line, "A"))
		ft_intervert_head_int_list(list_a);
	else if (!ft_strcmp(line, "B"))
		ft_intervert_head_int_list(list_b);
	ft_printf("les listes\n ");
	ft_put_tow_piles(*list_a, *list_b);
	get_next_line(0, &line);
}

void	supdebut(t_int_list **list)
{
	char *line;
	intmax_t nbr;

	ft_clear_scr();
	ft_printf("vous allez supprimer un elem au debut de la list : \n");
	ft_dell_bgn_int_list(list);
	ft_printf("la liste \n ");
	ft_put_int_list(*list);

	get_next_line(0, &line);
}

void	supfin(t_int_list **list)
{
	char *line;
	intmax_t nbr;

	ft_clear_scr();
	ft_printf("vous allez supprimer un elem a la fin de la list : \n");
	ft_dell_end_int_list(list);
	ft_printf("la liste \n ");
	ft_put_int_list(*list);

	get_next_line(0, &line);
}
void	ajouterdebut(t_int_list **list)
{
	char *line;
	intmax_t nbr;

	ft_clear_scr();
	ft_printf("vous allez ajouter un elem au debut de la list : \n");
	ft_printf("veillez entrer le num > ");
	get_next_line(0, &line);
	if (!ft_isempty(line))
	{
		nbr = ft_atoi(line);
		ft_add_bgn_int_list(nbr, list);
	}
	else
		ft_printf("vous n'avez rien entrer !!!\n ");
	ft_printf("la liste\n ");
	ft_put_int_list(*list);
	get_next_line(0, &line);
}

void	ajouterfin(t_int_list **list)
{
	char *line;
	intmax_t nbr;

	ft_clear_scr();
	ft_printf("vous allez ajouter un elem a la fin de la list : \n");
	ft_printf("veillez entrer le num > ");
	get_next_line(0, &line);
	if (!ft_isempty(line))
	{
		nbr = ft_atoi(line);
		ft_add_end_int_list(nbr, list);
	}else
		ft_printf("vous n'avez rien entrer !!!\n ");
	ft_printf("la liste \n ");
	ft_put_int_list(*list);

	get_next_line(0, &line);
}

void	supprimerelemlist(t_int_list **list)
{
	char *line;

	ft_clear_scr();
	ft_printf("vous allez supprimer un elem a la list : \n");
	ft_put_int_list(*list);
	ft_printf("vouez vous supprimer au debut tapper d.\n");
	ft_printf("vouez vous supprimer a la fin tapper f.\n");
	ft_printf("autre chose pour revenir au menu principal.\n");
	get_next_line(0, &line);
	if (line[0] == 'd')
		supdebut(list);
	if (line[0] == 'f')
		supfin(list);
}

void	ajoutelemlist(t_int_list **list)
{
	char *line;

	ft_clear_scr();
	ft_printf("vous allez ajouter un elem a la list : \n");
	ft_put_int_list(*list);
	ft_printf("vouez vous ajout au debut tapper d.\n");
	ft_printf("vouez vous ajout a la fin tapper f.\n");
	ft_printf("autre chose pour revenir au menu principal.\n");
	get_next_line(0, &line);
	if (line[0] == 'd')
		ajouterdebut(list);
	if (line[0] == 'f')
		ajouterfin(list);
}


void	add(t_int_list **list_a, t_int_list **list_b)
{
	char *line;
	intmax_t nbr;

	ft_clear_scr();
	ft_printf("les listes avant \n ");
	ft_put_tow_piles(*list_a, *list_b);

	ft_printf("veillez choisir une liste A/B tout autre chois pour "
			"revemir au menu > ");
	get_next_line(0, &line);

	if (!ft_strcmp(line, "A") || !ft_strcmp(line, "a"))
		ajoutelemlist(list_a);
	else if (!ft_strcmp(line, "B") || !ft_strcmp(line, "b"))
		ajoutelemlist(list_b);

	ft_printf("les listes\n ");
	ft_put_tow_piles(*list_a, *list_b);

	get_next_line(0, &line);

}

void	dell(t_int_list **list_a, t_int_list **list_b)
{
	char *line;
	intmax_t nbr;

	ft_clear_scr();
	ft_printf("les listes avant \n ");
	ft_put_tow_piles(*list_a, *list_b);

	ft_printf("veillez choisir une liste A/B tout autre chois pour "
			"revemir au menu > ");
	get_next_line(0, &line);

	if (!ft_strcmp(line, "A") || !ft_strcmp(line, "a"))
		supprimerelemlist(list_a);
	else if (!ft_strcmp(line, "B") || !ft_strcmp(line, "b"))
		supprimerelemlist(list_b);
	ft_printf("les listes\n ");
	ft_put_tow_piles(*list_a, *list_b);
	get_next_line(0, &line);
}

void	decal_h(t_int_list **list_a, t_int_list **list_b)
{
	char *line;
	intmax_t nbr;

	ft_clear_scr();
	ft_printf("les listes avant \n ");
	ft_put_tow_piles(*list_a, *list_b);

	ft_printf("veillez choisir une liste A/B tout autre chois "
			"pour revemir au menu > ");
	get_next_line(0, &line);

	if (!ft_strcmp(line, "A") || !ft_strcmp(line, "a"))
		ft_shift_top_int_list(list_a);
	else if (!ft_strcmp(line, "B") || !ft_strcmp(line, "b"))
		ft_shift_top_int_list(list_b);

	ft_printf("les listes\n ");
	ft_put_tow_piles(*list_a, *list_b);
	get_next_line(0, &line);
}

void	decal_b(t_int_list **list_a, t_int_list **list_b)
{
	char *line;
	intmax_t nbr;

	ft_clear_scr();
	ft_printf("les listes avant \n ");
	ft_put_tow_piles(*list_a, *list_b);

	ft_printf("veillez choisir une liste A/B tout autre chois "
			"pour revemir au menu > ");
	get_next_line(0, &line);

	if (!ft_strcmp(line, "A") || !ft_strcmp(line, "a"))
		ft_shift_bottom_int_list(list_a);
	else if (!ft_strcmp(line, "B") || !ft_strcmp(line, "b"))
		ft_shift_bottom_int_list(list_b);

	ft_printf("les listes \n ");
	ft_put_tow_piles(*list_a, *list_b);
	get_next_line(0, &line);
}

void	init(t_int_list **list_a, t_int_list **list_b)
{
	char *line;
	intmax_t nbr;

	ft_clear_scr();
	ft_printf("les listes avant \n ");
	ft_put_tow_piles(*list_a, *list_b);

	ft_printf("veillez choisir la liste de d'arriver A/B tout "
			"autre chois pour revemir au menu > ");
	get_next_line(0, &line);

	if (!ft_strcmp(line, "A") || !ft_strcmp(line, "a"))
			*list_a = NULL;
	else if (!ft_strcmp(line, "B") || !ft_strcmp(line, "b"))
			*list_b = NULL;

	ft_printf("les listes\n ");
}

void	push(t_int_list **list_a, t_int_list **list_b)
{
	char *line;
	intmax_t nbr;

	ft_clear_scr();
	ft_printf("les listes avant \n ");
	ft_put_tow_piles(*list_a, *list_b);

	ft_printf("veillez choisir la liste de d'arriver A/B tout "
			"autre chois pour revemir au menu > ");
	get_next_line(0, &line);

	if (!ft_strcmp(line, "A") || !ft_strcmp(line, "a"))
			ft_push_first_to_list(list_b, list_a);
	else if (!ft_strcmp(line, "B") || !ft_strcmp(line, "b"))
			ft_push_first_to_list(list_a, list_b);

	ft_printf("les listes\n ");
	ft_put_tow_piles(*list_a, *list_b);

	get_next_line(0, &line);
}

void	read_piles(t_int_list ** list_a, t_int_list ** list_b)
{
	char *line;

	ft_printf("pas encore developer...");
	get_next_line(0, &line);
}

void	read_action(t_int_list ** list_a, t_int_list ** list_b)
{
	char *line;

	ft_printf("pas encore developer...");
	get_next_line(0, &line);
}

BOOL	chercherelemlist(t_int_list **list)
{
	char *line;

	ft_printf("pas encore developer...");
	get_next_line(0, &line);
	return (T);
}


int		main()
{
	t_int_list *list_a;
	t_int_list *list_b;
	char	*line;
	int		choix;

	void (*fonctions[9])();
	list_a = NULL;
	list_b = NULL;
	ft_clear_scr();
	ft_printf("\t\t prograe de teste push swap   changer atoi to atoiintmax\n");
	while (1)
	{
		ft_put_tow_piles(list_a, list_b);
		ft_printf(" menu principale veuillez faire votre choix :\n");
		ft_printf(" 1- pour initialiser la list.\n");
		ft_printf(" 2- pour ajouter un elem a la list A/B.\n");
		ft_printf(" 3- pour supprimer un elem de la list A/B.\n");
	//	ft_printf(" 4- pour chercher un elem dans la list.\n");
		ft_printf(" 5- pour intervertir les deux premier elem de la list."
				"\t\t{green}<SA/SB>{eoc}\n");
		ft_printf(" 6- pour decaler vers le haut tout les elems de la list.\t"
				"{green}<RA/RB>{eoc}\n");
		ft_printf(" 7- pour decaler vers le bas tout les elems de la list.\t\t"
				"{green}<RRA/RRB>{eoc}\n");
		ft_printf(" 8- pour deplacer le premiere elem de <A dans B ou l'inverce>.\t"
				"{green}<PA/PB>{eoc}\n");
		ft_printf(" 9- pour SA et SB en meme temp."
				"\t\t\t\t\t{green}<SS>{eoc}\n");
		ft_printf(" 10- pour RA et RB en meme temp."
				"\t\t\t\t{green}<RR>{eoc}\n");
		ft_printf(" 11- pour RRA et RRB en meme temp."
				"\t\t\t\t{green}<RRR>{eoc}\n");
		ft_printf(" - tout autre valeur pour quiter \n");
		ft_printf(" veillez entrer votre choix > ", choix);
		get_next_line(0, &line);
		choix = ft_atoi(line);
		if (choix == 0 || choix > 11)
			break;
		if (choix == 1)
			init(&list_a, &list_b);
		if (choix == 2)
			add(&list_a, &list_b);
		if (choix == 3)
			dell(&list_a, &list_b);
		if (choix == 4)
			chercherelemlist(&list_a);
		if (choix == 5)
			inter(&list_a, &list_b);
		if (choix == 6)
			decal_h(&list_a, &list_b);
		if (choix == 7)
			decal_b(&list_a, &list_b);
		if (choix == 8)
			push(&list_a, &list_b);
		if (choix == 9)
			ft_intervert_head_tow_int_list(&list_a, &list_b);
		if (choix == 10)
			ft_shift_top_tow_int_list(&list_a, &list_b);
		if (choix == 11)
			ft_shift_bottom_tow_int_list(&list_a, &list_b);
		ft_clear_scr();
	}
	ft_clear_scr();
	ft_printf("ciao...");
	return (0);
}

void	ft_initfonctions(void (*fonctions[9])())
{
	/*	fonctions[0] = &creatlist;
		fonctions[1] = &;
		fonctions[2] = &;
		fonctions[3] = &;
		fonctions[4] = &;
		fonctions[5] = &;
		fonctions[6] = &;
		fonctions[7] = &;
		fonctions[8] = &;
		*/	//	return (fonctions);
}



