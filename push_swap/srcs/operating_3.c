/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operating_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:27:35 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/18 14:40:17 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_ab(t_data *info)
{
	rotate_a(info, 2);
	rotate_b(info, 2);
	ft_printf("rr\n");
}

void	reverse_rotate_ab(t_data *info)
{
	reverse_rotate_a(info, 2);
	reverse_rotate_b(info, 2);
	ft_printf("rrr\n");
}
