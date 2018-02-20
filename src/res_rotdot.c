/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   res_rotdot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlevko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 20:15:33 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/22 16:04:51 by vlevko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	res_rotdot(char ***res, int **curr, int ij[2], int len)
{
	int	num;
	int	pos;
	int	i;
	int	j;

	num = 1;
	i = ij[0];
	j = ij[1];
	while (num <= 4 && (*res)[i][j] == '.')
	{
		i = ij[0];
		j = ij[1];
		if (num != 4)
			pos = (*curr)[num];
		else
			pos = -1;
		res_rotate_one(pos, &i, &j, num);
		num++;
		if (i >= len || j >= len)
			return (0);
	}
	if (num == 5)
		return (1);
	return (0);
}
