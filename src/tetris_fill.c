/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetris_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <olbondar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 20:12:09 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/23 13:56:36 by olbondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	tetris_fill(char ***arr, int count, char buff[BUFF_SIZE], int ***dot)
{
	int		i;
	char	ch;

	i = 0;
	ch = 'A';
	while (i < count)
	{
		if (!((*arr)[i] = ft_strsub(buff, i * 21, 19)))
			return (1);
		if (tetris_check((*arr)[i], dot, i, ch))
			return (1);
		i++;
		ch++;
	}
	return (0);
}
