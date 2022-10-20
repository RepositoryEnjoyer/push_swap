/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_psh.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:32:39 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/18 18:15:04 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	scan_smallest_half(t_data *info)
{
	int	pos;
	int	half_size;

	pos = 0;
	half_size = info->size / 2;
	while (pos < info->sa_size)
	{
		if (info->stk_a[pos] < half_size)
			return (0);
		pos++;
	}
	return (1);
}

static int	search_smallest_half(t_data *info)
{
	int	pos_up;
	int	pos_down;

	pos_up = 0;
	pos_down = info->sa_size - 1;
	while ((info->stk_a[pos_up] > (info->size / 2)) && (pos_up <= info->sa_size
			/ 2))
		pos_up++;
	while ((info->stk_a[pos_down] > (info->size
				/ 2)) && (pos_down > info->sa_size / 2))
		pos_down--;
	pos_down -= info->sa_size;
	if (pos_up < pos_down)
		return (1);
	return (0);
}

void	push_smallest_half(t_data *info)
{
	while (!scan_smallest_half(info))
	{
		if (search_smallest_half(info))
		{
			while (info->stk_a[0] > info->size / 2)
				rotate_a(info, 1);
		}
		else
		{
			while (info->stk_a[0] > info->size / 2)
				reverse_rotate_a(info, 1);
		}
		push_b(info);
	}
}
