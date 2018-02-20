/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot_malloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlevko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 20:04:20 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/22 14:16:27 by vlevko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	dot_malloc(int ***dot, int count)
{
	int	i;

	i = 0;
	if (!(*dot = (int **)ft_memalloc(sizeof(int *) * count)))
		return (1);
	while (i < count)
	{
		if (!((*dot)[i] = (int *)ft_memalloc(sizeof(int) * 5)))
			return (dot_free(dot, count));
		i++;
	}
	return (0);
}
