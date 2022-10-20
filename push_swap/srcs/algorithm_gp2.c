/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_gp2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:22:56 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/20 19:27:36 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	calibrations(int ib, int ia, t_data *info)
{
	info->na = info->stk_a[ia];
	info->nb = info->stk_b[ib];
	while (info->stk_a[0] != info->na || info->stk_b[0] != info->nb)
	{
		if (info->stk_a[0] != info->na && info->stk_b[0] != info->nb)
			no_zero(ib, ia, info);
		else
			yes_some(ib, ia, info);
	}
}

void	min_move(int ib, t_data *info)
{
	if (is_nbr_tiniest(info->stk_b[ib], info) || is_nbr_biggest(info->stk_b[ib],
			info))
		calibrations(ib, tiniestnbr_pos(info), info);
	else
		calibrations(ib, first_dates(ib, info), info);
}

int	first_dates(int ib, t_data *info)
{
	int	index;
	int	diff;
	int	result;

	index = 0;
	diff = info->size + 1;
	while (index < info->sa_size)
	{
		if (info->stk_a[index] - info->stk_b[ib] >= 0
			&& info->stk_a[index] - info->stk_b[ib] < diff)
		{
			diff = info->stk_a[index] - info->stk_b[ib];
			result = index;
		}
		index++;
	}
	return (result);
}

int	index_call(int ib, int ia, t_data *info)
{
	if (ib <= info->sb_size / 2 && ia <= info->sa_size / 2)
	{
		if (ib > ia)
			return (ib);
		return (ia);
	}
	else if (ib > info->sb_size / 2 && ia > info->sa_size / 2)
	{
		if (info->sb_size - ib > info->sa_size - ia)
			return (info->sb_size - ib);
		return (info->sa_size - ia);
	}
	if (ia > info->sa_size / 2)
		return (info->sa_size - ia + ib);
	return (info->sb_size - ib + ia);
}
