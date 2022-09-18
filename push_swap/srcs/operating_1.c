/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operating_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:49:45 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/18 14:40:17 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_a(t_data *info)
{
	int	temp_chan;

	if (info->sa_size <= 1)
		return ;
	temp_chan = info->stk_a[0];
	info->stk_a[0] = info->stk_a[1];
	info->stk_a[1] = temp_chan;
	ft_printf("sa\n");
}

void	swap_b(t_data *info)
{
	int	temp_chan;

	if (info->sb_size <= 1)
		return ;
	temp_chan = info->stk_b[0];
	info->stk_b[0] = info->stk_b[1];
	info->stk_b[1] = temp_chan;
	ft_printf("sb\n");
}

void	super_swap(t_data *info)
{
	the_double_swaper(info);
}

void	push_a(t_data *info)
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
	ft_printf("pa\n");
}

void	push_b(t_data *info)
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
	ft_printf("pb\n");
}
