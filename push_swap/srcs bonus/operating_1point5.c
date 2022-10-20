/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operating_1point5.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:33:03 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/22 14:09:42 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

static int	swapete_a_bonus(t_data *info)
{
	int	temp_chan;

	if (info->sa_size <= 1)
		return (0);
	temp_chan = info->stk_a[0];
	info->stk_a[0] = info->stk_a[1];
	info->stk_a[1] = temp_chan;
	return (1);
}

static int	swapete_b_bonus(t_data *info)
{
	int	temp_chan;

	if (info->sb_size <= 1)
		return (0);
	temp_chan = info->stk_b[0];
	info->stk_b[0] = info->stk_b[1];
	info->stk_b[1] = temp_chan;
	return (1);
}

void	the_double_swaper_bonus(t_data *info, int x)
{
	if (swapete_a_bonus(info) && swapete_b_bonus(info) && x == 1)
	{
		ft_printf("ss\n");
		return ;
	}
	else if (swapete_a_bonus(info) && !swapete_b_bonus(info) && x == 1)
	{
		ft_printf("sa\n");
		return ;
	}
	else if (!swapete_a_bonus(info) && swapete_b_bonus(info) && x == 1)
	{
		ft_printf("sb\n");
		return ;
	}
	else
		return ;
}
