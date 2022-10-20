/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:05:08 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/22 14:07:22 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
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
void		swap_a_bonus(t_data *info, int x);
void		swap_b_bonus(t_data *info, int x);
void		super_swap_bonus(t_data *info, int x);
void		the_double_swaper_bonus(t_data *info, int x);

//	Push!
void		push_a_bonus(t_data *info, int x);
void		push_b_bonus(t_data *info, int x);

//Rotate!
void		rotate_a_bonus(t_data *info, int x);
void		rotate_b_bonus(t_data *info, int x);
void		rotate_ab_bonus(t_data *info, int x);

//Reverse rotating!
void		reverse_rotate_a_bonus(t_data *info, int x);
void		reverse_rotate_b_bonus(t_data *info, int x);
void		reverse_rotate_ab_bonus(t_data *info, int x);

#endif
