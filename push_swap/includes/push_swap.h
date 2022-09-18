/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:51:53 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/18 14:29:28 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_data
{
	int		size;
	int		sa_size;
	int		sb_size;
	int		close;
	int		index;
	int		*sorted;
	int		*alg_calc;
	int		*stk_a;
	int		*stk_b;
	char	**is_valid;
}			t_data;

//Parsing stuff and some extra utils
int			validator(int argc, char **argv, t_data *info);
char		**char_tab_all(int argc, char **argv);
void		free_is_valid(char **is_valid);

//Stack creating functions
void		stk_a_maker(t_data *info);
void		stk_b_maker(t_data *info);
void		stk_sorting(t_data *info);
void		print_stk(t_data *info);
void		print_sorted(t_data *info);

//The Operations:
//	Swap!
void		swap_a(t_data *info);
void		swap_b(t_data *info);
void		super_swap(t_data *info);
void		the_double_swaper(t_data *info);

//	Push!
void		push_a(t_data *info);
void		push_b(t_data *info);

//Rotate!
void		rotate_a(t_data *info, int x);
void		rotate_b(t_data *info, int x);
void		rotate_ab(t_data *info);

//Reverse rotating!
void		reverse_rotate_a(t_data *info, int x);
void		reverse_rotate_b(t_data *info, int x);
void		reverse_rotate_ab(t_data *info);

//Algorithming!
int			stk_a_comparator(t_data *info);
int			stk2sort_comparator(t_data *info);
int			tiniestnbr_pos(t_data *info);
int			is_nbr_tiniest(int nbr, t_data *info);
void		firstposing_tiniest(t_data *info);
void		sorting_3(t_data *info);
void		sorting_4(t_data *info);
void		sorting_5(t_data *info);

#endif
