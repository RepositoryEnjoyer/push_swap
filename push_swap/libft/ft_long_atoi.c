/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:52:54 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/14 21:03:40 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	latoi(char *str)
{
	int		sign;
	long	i;
	long	result;

	sign = 1;
	i = 0;
	result = 0;
	if (!str)
		return (0);
	while (str[i] < 33)
		i++;
	if (str[i] == '-')
	{
		i++;
		sign = -1;
	}
	while (str[i])
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * sign);
}
