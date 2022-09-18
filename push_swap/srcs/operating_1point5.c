/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operating_1point5.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:33:03 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/18 14:40:17 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	swapete_a(t_data *info)
{
	int	temp_chan;

	if (info->sa_size <= 1)
		return (0);
	temp_chan = info->stk_a[0];
	info->stk_a[0] = info->stk_a[1];
	info->stk_a[1] = temp_chan;
	return (1);
}

static int	swapete_b(t_data *info)
{
	int	temp_chan;

	if (info->sb_size <= 1)
		return (0);
	temp_chan = info->stk_b[0];
	info->stk_b[0] = info->stk_b[1];
	info->stk_b[1] = temp_chan;
	return (1);
}

void	the_double_swaper(t_data *info)
{
	if (swapete_a(info) && swapete_b(info))
	{
		ft_printf("ss\n");
		return ;
	}
	else if (swapete_a(info) && !swapete_b(info))
	{
		ft_printf("sa\n");
		return ;
	}
	else if (!swapete_a(info) && swapete_b(info))
	{
		ft_printf("sb\n");
		return ;
	}
	else
		return ;
}
