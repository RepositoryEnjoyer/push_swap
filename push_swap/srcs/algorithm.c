/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:13:01 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/18 14:40:17 by cmaurici         ###   ########.fr       */
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
	if (!stk2sort_comparator(info))
	{
		firstposing_tiniest(info);
		push_b(info);
		sorting_3(info);
		push_a(info);
	}
}

void	sorting_5(t_data *info)
{
	if (!stk2sort_comparator(info))
	{
		firstposing_tiniest(info);
		push_b(info);
		sorting_4(info);
		push_a(info);
	}
}
