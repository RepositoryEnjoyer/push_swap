/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operating_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:52:39 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/18 14:40:17 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_a(t_data *info, int x)
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

void	rotate_b(t_data *info, int x)
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

void	reverse_rotate_a(t_data *info, int x)
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

void	reverse_rotate_b(t_data *info, int x)
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
