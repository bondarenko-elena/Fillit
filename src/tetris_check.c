/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetris_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <olbondar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 20:09:33 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/23 13:55:59 by olbondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	tetris_check(char *curr, int ***dot, int index, char ch)
{
	int	i;
	int	hash;
	int	period;
	int	br;

	i = 0;
	hash = 0;
	period = 0;
	br = 0;
	while (i < 20)
	{
		if (curr[i] == '#')
			hash++;
		else if (curr[i] == '.')
			period++;
		else if (curr[i] == '\n' || curr[i] == '\0')
			br++;
		i++;
	}
	if (hash != 4 || period != 12 || br != 4)
		return (error_print("error"));
	return (tetris_ultima_check(curr, dot, index, ch));
}
