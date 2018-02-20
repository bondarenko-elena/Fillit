/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   res_rotate_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <olbondar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 01:17:40 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/23 14:18:27 by olbondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	res_rotate_one(int pos, int *i, int *j, int num)
{
	if (pos == 1)
		*j = *j + 1;
	else if (pos == 2)
		*j = *j + 2;
	else if (pos == 3)
	{
		if (num != 1)
			*j = *j + 3;
		else
		{
			*i = *i + 1;
			*j = *j - 2;
		}
	}
	else if (pos == 4)
	{
		*i = *i + 1;
		*j = *j - 1;
	}
	else if (pos == 5)
		*i = *i + 1;
	else
		res_rotate_two(pos, i, j);
}
