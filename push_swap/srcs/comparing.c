/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparing.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:51:58 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/18 14:40:17 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	stk_a_comparator(t_data *info)
{
	int	pos;

	pos = 0;
	while (pos < info->sa_size - 1)
	{
		if (info->stk_a[pos] > info->stk_a[pos + 1])
			return (0);
		pos++;
	}
	return (1);
}

int	stk2sort_comparator(t_data *info)
{
	int	pos;

	pos = 0;
	while (pos < info->size)
	{
		if (info->stk_a[pos] != info->sorted[pos])
			return (0);
		pos++;
	}
	return (1);
}
