/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetris_ultima_check.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <olbondar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 20:08:11 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/23 13:57:19 by olbondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	tetris_ultima_check(char *curr, int ***dot, int index, char ch)
{
	int	i;
	int	a;
	int	b;
	int	c;
	int	d;

	i = 0;
	a = tetris_get_x(curr, &i);
	b = tetris_get_x(curr, &i);
	c = tetris_get_x(curr, &i);
	d = tetris_get_x(curr, &i);
	(*dot)[index][0] = a;
	(*dot)[index][1] = b - a;
	(*dot)[index][2] = c - a;
	(*dot)[index][3] = d - a;
	(*dot)[index][4] = ch;
	if (tetris_check_hash(curr) == 0)
		return (0);
	return (error_print("error"));
}
