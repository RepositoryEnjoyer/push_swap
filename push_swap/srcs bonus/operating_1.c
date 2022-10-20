/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operating_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:49:45 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/22 14:10:41 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	swap_a_bonus(t_data *info, int x)
{
	int	temp_chan;

	if (info->sa_size <= 1)
		return ;
	temp_chan = info->stk_a[0];
	info->stk_a[0] = info->stk_a[1];
	info->stk_a[1] = temp_chan;
	if (x == 1)
		ft_printf("sa\n");
}

void	swap_b_bonus(t_data *info, int x)
{
	int	temp_chan;

	if (info->sb_size <= 1)
		return ;
	temp_chan = info->stk_b[0];
	info->stk_b[0] = info->stk_b[1];
	info->stk_b[1] = temp_chan;
	if (x == 1)
		ft_printf("sb\n");
}

void	super_swap_bonus(t_data *info, int x)
{
	the_double_swaper_bonus(info, x);
}

void	push_a_bonus(t_data *info, int x)
{
	int	pos;

	if ((info->size - info->sa_size) == 0)
		return ;
	pos = info->sa_size;
	while (pos > 0)
	{
		info->stk_a[pos] = info->stk_a[pos - 1];
		pos--;
	}
	info->stk_a[0] = info->stk_b[0];
	while (pos < (info->size - info->sa_size))
	{
		info->stk_b[pos] = info->stk_b[pos + 1];
		pos++;
	}
	info->sa_size++;
	info->sb_size--;
	if (x == 1)
		ft_printf("pa\n");
}

void	push_b_bonus(t_data *info, int x)
{
	int	pos;

	if ((info->size - info->sb_size) == 0)
		return ;
	pos = info->sb_size;
	while (pos > 0)
	{
		info->stk_b[pos] = info->stk_b[pos - 1];
		pos--;
	}
	info->stk_b[0] = info->stk_a[0];
	while (pos < (info->sa_size))
	{
		info->stk_a[pos] = info->stk_a[pos + 1];
		pos++;
	}
	info->stk_a[info->sa_size - 1] = 0;
	info->sa_size--;
	info->sb_size++;
	if (x == 1)
		ft_printf("pb\n");
}
