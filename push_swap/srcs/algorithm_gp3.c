/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_gp3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:47:12 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/20 19:25:51 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	no_zero(int ib, int ia, t_data *info)
{
	if (ia <= info->sa_size / 2 && ib <= info->sb_size / 2)
		rotate_ab(info);
	else if (ia > info->sa_size / 2 && ib > info->sb_size / 2)
		reverse_rotate_ab(info);
	else if (ia <= info->sa_size / 2)
		rotate_a(info, 1);
	else
		reverse_rotate_a(info, 1);
}

void	yes_some(int ib, int ia, t_data *info)
{
	if (info->stk_a[0] != info->na)
	{
		if (ia <= info->sa_size / 2)
			rotate_a(info, 1);
		else
			reverse_rotate_a(info, 1);
	}
	if (info->stk_b[0] != info->nb)
	{
		if (ib <= info->sb_size / 2)
			rotate_b(info, 1);
		else
			reverse_rotate_b(info, 1);
	}
}
