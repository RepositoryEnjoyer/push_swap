/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:50:07 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/18 14:39:28 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	free_for_all(t_data *info)
{
	free(info->stk_a);
	free(info->stk_b);
	free(info->sorted);
	free_is_valid(info->is_valid);
}

static void	algorithm(t_data *info)
{
	if (stk2sort_comparator(info) == 0)
	{
		if (info->size == 2)
			rotate_a(info, 1);
		else if (info->size == 3)
			sorting_3(info);
		else if (info->size == 4)
			sorting_4(info);
		else if (info->size == 5)
			sorting_5(info);
	}
}

int	main(int argc, char **argv)
{
	t_data	info;

	if (validator(argc, argv, &info) == 0)
	{
		free_for_all(&info);
		return (ft_printf("Error! >:(\n"));
	}
	stk_a_maker(&info);
	stk_b_maker(&info);
	stk_sorting(&info);
	ft_printf("\nForma base:\n");
	print_stk(&info);
	algorithm(&info);
	ft_printf("\nForma final:\n");
	print_stk(&info);
	free_for_all(&info);
	return (0);
}
//system("leaks -q push_swap");
