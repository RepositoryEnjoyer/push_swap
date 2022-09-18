/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_chartab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:15:11 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/14 20:20:13 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*free_chartab(char **char_tab)
{
	int	pos;

	pos = 0;
	while (char_tab[pos])
	{
		free(char_tab[pos]);
		pos++;
	}
	free(char_tab);
	return (NULL);
}
