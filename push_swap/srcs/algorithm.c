/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:13:01 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/22 18:19:02 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sorting_3(t_data *info)
{
	if (!stk_a_comparator(info))
	{
		if (info->stk_a[0] > info->stk_a[1] && info->stk_a[0] > info->stk_a[2]
			&& info->stk_a[1] < info->stk_a[2])
			rotate_a(info, 1);
		else if (info->stk_a[0] > info->stk_a[1] && info->stk_a[0]
			> info->stk_a[2] && info->stk_a[1] > info->stk_a[2])
		{
			swap_a(info);
			reverse_rotate_a(info, 1);
		}
		else if (info->stk_a[0] < info->stk_a[1] && info->stk_a[0]
			< info->stk_a[2])
		{
			swap_a(info);
			rotate_a(info, 1);
		}
		else if (info->stk_a[0] > info->stk_a[1])
			swap_a(info);
		else
			reverse_rotate_a(info, 1);
	}
}

void	sorting_4(t_data *info)
{
	firstposing_tiniest(info);
	push_b(info);
	sorting_3(info);
	push_a(info);
}

void	sorting_5(t_data *info)
{
	firstposing_tiniest(info);
	push_b(info);
	sorting_4(info);
	push_a(info);
}

void	sorting_100(t_data *info)
{
	info->alg_calc = ft_calloc(info->size, sizeof(int));
	while (info->sa_size > 3)
		push_b(info);
	sorting_3(info);
	while (info->sa_size < info->size)
	{
		min_move(calc_num_pos(info), info);
		push_a(info);
	}
	while (!stk_a_comparator(info))
	{
		if (tiniestnbr_pos(info) <= info->sa_size)
			rotate_a(info, 1);
		else
			reverse_rotate_a(info, 1);
	}
}

void	sorting_100plus(t_data *info)
{
	info->alg_calc = ft_calloc(info->size, sizeof(int));
	push_smallest_half(info);
	while (info->sa_size > 3)
		push_b(info);
	sorting_3(info);
	while (info->sa_size < info->size)
	{
		min_move(calc_num_pos(info), info);
		push_a(info);
	}
	while (!stk_a_comparator(info))
	{
		if (tiniestnbr_pos(info) <= info->sa_size)
			rotate_a(info, 1);
		else
			reverse_rotate_a(info, 1);
	}
}
