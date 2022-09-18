/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:18:32 by cmaurici          #+#    #+#             */
/*   Updated: 2022/09/18 14:40:17 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_stk(t_data *info)
{
	int	pos;

	pos = 0;
	ft_printf("\nStack1 = ");
	while (pos < info->size)
	{
		ft_printf("%d ", info->stk_a[pos]);
		pos++;
	}
	ft_printf("\nStack2 = ");
	pos = 0;
	while (pos < info->size)
	{
		ft_printf("%d ", info->stk_b[pos]);
		pos++;
	}
	ft_printf("\n");
}

void	free_is_valid(char **is_valid)
{
	int	pos;

	pos = 0;
	while (is_valid[pos])
	{
		free(is_valid[pos]);
		pos++;
	}
	free(is_valid);
}

static char	**char_tab_args(int argc, char **argv)
{
	char	**char_tab;
	int		pos;
	size_t	len;

	char_tab = malloc((sizeof(char *) * argc));
	char_tab[argc - 1] = 0;
	pos = 1;
	while (argv[pos])
	{
		len = ft_strlen(argv[pos]);
		char_tab[pos - 1] = malloc(sizeof(char) * len);
		if (!(argv[pos]))
			return (free_chartab(char_tab));
		char_tab[pos - 1][len - 1] = '\0';
		ft_strcpy(char_tab[pos - 1], argv[pos]);
		pos++;
	}
	return (char_tab);
}

char	**char_tab_all(int argc, char **argv)
{
	if (argc == 2)
		return (ft_split(argv[1], ' '));
	else
		return (char_tab_args(argc, argv));
}
