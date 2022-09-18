/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:46:18 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/18 14:40:17 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	dup_checker(char *c, char **is_valid)
{
	int	pos;
	int	counter;

	pos = 0;
	counter = 0;
	while (is_valid[pos])
	{
		if (ft_atoi(c) == ft_atoi(is_valid[pos]))
			counter++;
		pos++;
	}
	return (counter);
}

static int	is_num(char **is_valid)
{
	int	pos1;
	int	pos2;

	pos1 = 0;
	while (is_valid[pos1])
	{
		pos2 = 0;
		while (is_valid[pos1][pos2])
		{
			if ((pos2 == 0 && is_valid[pos1][pos2] == '-') ||
				is_valid[pos1][pos2] == '+')
				pos2++;
			if (is_valid[pos1][pos2] < 48 || is_valid[pos1][pos2] > 57)
				return (0);
			pos2++;
		}
		pos1++;
	}
	return (1);
}

static int	is_int(char **is_valid)
{
	int	p;

	p = 0;
	while (is_valid[p])
	{
		if (latoi(is_valid[p]) > 2147483647 || latoi(is_valid[p]) < -2147483647)
			return (0);
		p++;
	}
	return (1);
}

static int	is_single(char **is_valid)
{
	int	i;

	i = 0;
	while (is_valid[i])
	{
		if ((dup_checker(is_valid[i], is_valid) > 1))
			return (0);
		i++;
	}
	return (1);
}

int	validator(int argc, char **argv, t_data *info)
{
	int	flag_chan;

	info->is_valid = char_tab_all(argc, argv);
	if (!info->is_valid)
		return (0);
	flag_chan = 0;
	if (is_num(info->is_valid) == 0)
		flag_chan = 1;
	else if (is_int(info->is_valid) == 0)
		flag_chan = 1;
	else if (is_single(info->is_valid) == 0)
		flag_chan = 1;
	if (flag_chan == 1)
		return (0);
	info->size = 0;
	while (info->is_valid[info->size])
		info->size++;
	info->sa_size = info->size;
	info->sb_size = 0;
	return (1);
}
