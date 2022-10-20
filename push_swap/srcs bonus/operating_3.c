/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operating_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:27:35 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/22 13:09:42 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	rotate_ab_bonus(t_data *info, int x)
{
	rotate_a_bonus(info, 2);
	rotate_b_bonus(info, 2);
	if (x == 1)
		ft_printf("rr\n");
}

void	reverse_rotate_ab_bonus(t_data *info, int x)
{
	reverse_rotate_a_bonus(info, 2);
	reverse_rotate_b_bonus(info, 2);
	if (x == 1)
		ft_printf("rrr\n");
}
