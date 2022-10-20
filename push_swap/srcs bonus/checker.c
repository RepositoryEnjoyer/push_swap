/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:04:22 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/22 14:57:41 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

static int	tiny_valid(char *str)
{
	if (ft_strncmp(str, "ra\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "rb\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "rr\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "rra\n", 4) == 0)
		return (1);
	else if (ft_strncmp(str, "rrb\n", 4) == 0)
		return (1);
	else if (ft_strncmp(str, "rrr\n", 4) == 0)
		return (1);
	else if (ft_strncmp(str, "pa\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "pb\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "sa\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "sb\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "ss\n", 3) == 0)
		return (1);
	return (0);
}

static void	checking(char *str, t_data *info)
{
	if (ft_strncmp(str, "ra\n", 3) == 0)
		return (rotate_a_bonus(info, 0));
	else if (ft_strncmp(str, "rb\n", 3) == 0)
		return (rotate_b_bonus(info, 0));
	else if (ft_strncmp(str, "rr\n", 3) == 0)
		return (rotate_ab_bonus(info, 0));
	else if (ft_strncmp(str, "rra\n", 4) == 0)
		return (reverse_rotate_a_bonus(info, 0));
	else if (ft_strncmp(str, "rrb\n", 4) == 0)
		return (reverse_rotate_b_bonus(info, 0));
	else if (ft_strncmp(str, "rrr\n", 4) == 0)
		return (reverse_rotate_ab_bonus(info, 0));
	else if (ft_strncmp(str, "pa\n", 3) == 0)
		return (push_a_bonus(info, 0));
	else if (ft_strncmp(str, "pb\n", 3) == 0)
		return (push_b_bonus(info, 0));
	else if (ft_strncmp(str, "sa\n", 3) == 0)
		return (swap_a_bonus(info, 0));
	else if (ft_strncmp(str, "sb\n", 3) == 0)
		return (swap_a_bonus(info, 0));
	else if (ft_strncmp(str, "ss\n", 3) == 0)
		return (super_swap_bonus(info, 0));
}

static int	stk2sorted_compare(t_data *info)
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

static void	free_for_all(t_data *info)
{
	free(info->stk_a);
	free(info->stk_b);
	free(info->sorted);
	free_is_valid(info->is_valid);
}

int	main(int argc, char **argv)
{
	t_data	info;
	char	*str;

	if (validator(argc, argv, &info) == 0)
	{
		free_is_valid(info.is_valid);
		return (ft_putstr_fd("Error\n", 2), 0);
	}
	stk_a_maker(&info);
	stk_b_maker(&info);
	stk_sorting(&info);
	str = get_next_lineb(0);
	while (*str)
	{
		if (!tiny_valid(str))
			return (ft_putstr_fd("Error\n", 2), 0);
		checking(str, &info);
		ft_strcpy(str, get_next_lineb(0));
	}
	if (!stk2sorted_compare(&info))
		return (ft_putstr_fd("KO\n", 2), 0);
	ft_putstr_fd("OK\n", 1);
	free_for_all(&info);
	return (0);
}
