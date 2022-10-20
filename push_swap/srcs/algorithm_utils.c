/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:41:38 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/20 17:21:29 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	tiniestnbr_pos(t_data *info)
{
	int	pos;

	pos = 0;
	while (pos < info->sa_size)
	{
		if (is_nbr_tiniest(info->stk_a[pos], info))
			return (pos);
		pos++;
	}
	return (-1);
}

int	is_nbr_biggest(int nbr, t_data *info)
{
	int	pos;

	pos = 0;
	while (pos < info->sa_size)
	{
		if (nbr < info->stk_a[pos])
			return (0);
		pos++;
	}
	return (1);
}

int	is_nbr_tiniest(int nbr, t_data *info)
{
	int	pos;

	pos = 0;
	while (pos < info->sa_size)
	{
		if (nbr > info->stk_a[pos])
			return (0);
		pos++;
	}
	return (1);
}

void	firstposing_tiniest(t_data *info)
{
	while (!is_nbr_tiniest(info->stk_a[0], info))
	{
		if (tiniestnbr_pos(info) > (info->size / 2))
			reverse_rotate_a(info, 1);
		else
			rotate_a(info, 1);
	}
}
