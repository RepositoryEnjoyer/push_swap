/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:11:29 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/15 17:11:44 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	if (!src)
	{
		*dest = 0;
		return ;
	}
	while (i < ft_strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
}
