/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operating_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:52:39 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/22 12:59:20 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	rotate_a_bonus(t_data *info, int x)
{
	int	pos;
	int	temp;

	pos = 0;
	temp = info->stk_a[0];
	while (pos < info->sa_size)
	{
		info->stk_a[pos] = info->stk_a[pos + 1];
		pos++;
	}
	info->stk_a[info->sa_size - 1] = temp;
	if (x == 1)
		ft_printf("ra\n");
}

void	rotate_b_bonus(t_data *info, int x)
{
	int	pos;
	int	temp;

	pos = 0;
	temp = info->stk_b[0];
	while (pos < info->sb_size)
	{
		info->stk_b[pos] = info->stk_b[pos + 1];
		pos++;
	}
	info->stk_b[info->size - info->sa_size - 1] = temp;
	if (x == 1)
		ft_printf("rb\n");
}

void	reverse_rotate_a_bonus(t_data *info, int x)
{
	int	pos;
	int	temp;

	pos = info->sa_size;
	temp = info->stk_a[pos - 1];
	while (pos > 0)
	{
		info->stk_a[pos] = info->stk_a[pos - 1];
		pos--;
	}
	info->stk_a[0] = temp;
	info->stk_a[info->sa_size] = 0;
	if (x == 1)
		ft_printf("rra\n");
}

void	reverse_rotate_b_bonus(t_data *info, int x)
{
	int	pos;
	int	temp;

	pos = info->size - info->sa_size;
	temp = info->stk_b[pos - 1];
	while (pos > 0)
	{
		info->stk_b[pos] = info->stk_b[pos - 1];
		pos--;
	}
	info->stk_b[0] = temp;
	info->stk_b[info->size - info->sa_size] = 0;
	if (x == 1)
		ft_printf("rrb\n");
}
