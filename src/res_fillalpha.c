/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   res_fillalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlevko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 20:19:08 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/22 15:58:08 by vlevko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	res_fillalpha(char ***res, t_flist *fcls, int ***dot, int index)
{
	int	*curr;
	int	ij[2];

	if (index == fcls->count)
		return (0);
	ij[0] = -1;
	curr = (*dot)[index];
	while (++ij[0] < fcls->len)
	{
		ij[1] = 0;
		while (ij[1] < fcls->len)
		{
			if (res_rotdot(res, &curr, ij, fcls->len))
			{
				res_fillch(res, &curr, ij, fcls->len);
				if (res_fillalpha(res, fcls, dot, index + 1) == 0)
					return (0);
				else
					res_back(res, &curr, ij, fcls->len);
			}
			ij[1]++;
		}
	}
	return (1);
}
