/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:51:53 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/20 19:44:27 by cmaurici         ###   ########.fr       */
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
	int		na;
	int		nb;
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
int			is_nbr_biggest(int nbr, t_data *info);
void		firstposing_tiniest(t_data *info);
void		push_smallest_half(t_data *info);
int			calc_num_pos(t_data *info);
void		min_move(int ib, t_data *info);
void		calibrations(int ib, int ia, t_data *info);
int			first_dates(int ib, t_data *info);
int			index_call(int ib, int ia, t_data *info);
void		sorting_3(t_data *info);
void		sorting_4(t_data *info);
void		sorting_5(t_data *info);
void		sorting_100(t_data *info);
void		sorting_100plus(t_data *info);
void		no_zero(int ib, int ia, t_data *info);
void		yes_some(int ib, int ia, t_data *info);

#endif
