/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   res_fillch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlevko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 20:16:44 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/22 16:14:10 by vlevko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	res_fillch(char ***res, int **curr, int ij[2], int len)
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
		(*res)[i][j] = (*curr)[4];
		i = ij[0];
		j = ij[1];
		if (num != 4)
			pos = (*curr)[num];
		else
			pos = -1;
		res_rotate_one(pos, &i, &j, num);
		num++;
		if (i >= len || j >= len)
			return ;
	}
}
