/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_gp1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:54:27 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/22 18:02:12 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	tiny_call(int ib, t_data *info)
{
	int	love;

	love = tiniestnbr_pos(info);
	return (index_call(ib, love, info));
}

static int	love_call(int ib, t_data *info)
{
	int	love;

	if (is_nbr_tiniest(info->stk_b[ib], info)
		|| is_nbr_biggest(info->stk_b[ib], info))
		return (tiny_call(ib, info));
	love = first_dates(ib, info);
	return (index_call(ib, love, info));
}

int	calc_num_pos(t_data *info)
{
	int	ib;
	int	result;
	int	ac_tiniest;

	ib = 0;
	while (ib < info->sb_size)
	{
		info->alg_calc[ib] = love_call(ib, info);
		ib++;
	}
	ib = 0;
	ac_tiniest = info->size + 1;
	while (ib < info->sb_size)
	{
		if (info->alg_calc[ib] < ac_tiniest)
		{
			ac_tiniest = info->alg_calc[ib];
			result = ib;
		}
		ib++;
	}
	return (result);
}
