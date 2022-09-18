/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stk_creating.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:30:08 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/18 14:40:17 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_sorted(t_data *info)
{
	int	pos;

	pos = 0;
	ft_printf("\nStack Sorted = ");
	while (pos < info->size)
	{
		ft_printf("%d ", info->sorted[pos]);
		pos++;
	}
	ft_printf("\n");
}

void	stk_sorting(t_data *info)
{
	int	pos;
	int	temp;

	pos = 0;
	info->sorted = malloc(sizeof(int) * info->size);
	while (pos < info->size)
	{
		info->sorted[pos] = info->stk_a[pos];
		pos++;
	}
	pos = 0;
	while (pos < info->size - 1)
	{
		if (info->sorted[pos] > info->sorted[pos + 1])
		{
			temp = info->sorted[pos];
			info->sorted[pos] = info->sorted[pos + 1];
			info->sorted[pos + 1] = temp;
			pos = 0;
		}
		else
			pos++;
	}
}

static int	indexing_stuff(char *nbr_to_be_indexed, t_data *info)
{
	int	pos;
	int	counter;

	pos = 0;
	counter = 0;
	while (info->is_valid[pos])
	{
		if (ft_atoi(info->is_valid[pos]) > ft_atoi(nbr_to_be_indexed))
			counter++;
		pos++;
	}
	return (info->size - counter);
}

void	stk_a_maker(t_data *info)
{
	int	pos;

	pos = 0;
	info->stk_a = ft_calloc(info->size, sizeof(int));
	if (!info->stk_a)
		return (free_is_valid(info->is_valid));
	while (pos < info->size)
	{
		info->stk_a[pos] = indexing_stuff(info->is_valid[pos], info);
		pos++;
	}
}

void	stk_b_maker(t_data *info)
{
	info->stk_b = ft_calloc(info->size, sizeof(int));
	if (!info->stk_b)
		return (free_is_valid(info->is_valid));
}
